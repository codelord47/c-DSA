//#include <bits/stdc++.h>
//using namespace std;
//typedef pair<int,int> pii;
//
//// get the path by following breath first search
//// this gives shortest path from v1->v2 if it exists
//
//bool getPathBFS(bool ** adj,int V,bool * visited,int v1,int v2,vector<int> &path){
//    
//    // queue to store adjacent elements
//    queue<int> q;
//    // map to store  -- relation[destination] = source
//    //since we need to build the path from start if we find destination
//    //since sources are not unique we do not store them as key we store them as value
//    map<int,int> relation;
//    //mark start node visited
//    visited[v1] = true;
//    //start node has no source which -1 indicates
//    relation[v1] = -1;
//    q.push(v1);
//    while(!q.empty()){
//        //take the first element of queue out
//        int node = q.front();
//        q.pop();
//        for(int i=0;i<V;i++){
//            //go to every one of its unvisited neighbours
//            if(adj[node][i]&&!visited[i]){
//                //mark that 'i' is adjacent to 'node' --> if we get a path from i to v2 we can use relation[i] to find source of i there by getting path from node to v2
//                relation.insert(pii(i,node));
//                // if found v2 that means our search is over
//                //found a path
//                if(i==v2) {
//                    //find the source of i
//                    int curr = relation[i];
//                    path.push_back(v2);
//                    // build the path backwards
//                    while(curr!=-1){
//                        path.push_back(curr);
//                        curr = relation[curr];
//                    }
//                    return true;
//                }
//                //else push the unvisited neighbours into the queue and mark them visited
//                q.push(i);
//                visited[i] = true;
//            }
//        }
//    }
//    // not found a path
//    return false;
//}
//
//int main(){
//    int V,E,f,s,v1,v2;
//    cin>>V>>E;
//
//    bool ** adj = new bool * [V];
//    for(int i=0;i<V;i++){
//        adj[i] = new bool [V];
//        for(int j=0;j<V;j++){
//            adj[i][j] = false;
//        }
//    }
//    bool * visited = new bool [V];
//    for(int i=0;i<V;i++) visited[i] = false;
//    for(int i=0;i<E;i++){
//        cin>>f>>s;
//        adj[f][s] = true;
//        adj[s][f] = true;
//    }
//    cin>>v1>>v2;
//    vector<int> path;
//
//    bool ans = getPathBFS(adj,V,visited,v1,v2,path);
//
//    if(ans) {
//        for(long i= path.size()-1;i>=0;i--){
//            cout<<path[i]<<" ";
//        }
//    }
//    cout<<endl;
//
//    for(int i=0;i<V;i++){
//        delete [] adj[i];
//    }
//    delete [] adj;
//
//    return 0;
//}
//
//
//
//
