//#include <bits/stdc++.h>
//using namespace std;
//
//// if a path not found returns false else returns true and stores the path(reversed) in path vector
//
//bool getPathDFS(bool ** adj,int V,bool * visited,int v1,int v2,vector<int> &path){
//    
//    visited[v1] = true;
//    // if reached the final node push the node in path and return true
//    if (v1==v2){
//        path.push_back(v1);
//        return true;
//    }
//    //else goto every unvisited neighbour of this node and if there exists a path then push this node in path and return true
//    for(int i=0;i<V;i++){
//        if(adj[v1][i]&&!visited[i]){
//            bool ans =  getPathDFS(adj,V,visited,i,v2,path);
//            if (ans) {
//                path.push_back(v1);
//                return true;
//            }
//        }
//    }
//    //if there exists no path from this node to final node return false
//    return false;
//}
//
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
//    bool ans = getPathDFS(adj,V,visited,v1,v2,path);
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
