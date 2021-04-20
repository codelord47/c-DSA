//#include <bits/stdc++.h>
//using namespace std;
//
//void BFS(bool ** adj,int V){
//    //create a visited array to keep record of visiteds
//    bool * visited = new bool [V];
//    //queue to store the order of nodes to be traversed
//    queue<int> q;
//    for(int x=0;x<V;x++){
//        if(!visited[x]){
//            q.push(x);
//            visited[x] = true;
//            //while all nodes not traversed in the connected graph
//            while(!q.empty()){
//                //take out front element and print it
//                int node = q.front();
//                cout<<node<<" ";
//                q.pop();
//                // push all its neighbours which are not visited into the queue and make them visited
//                for(int i=0;i<V;i++){
//                    if(adj[node][i]&&!visited[i]){
//                            q.push(i);
//                            visited[i] = true;
//                    }
//                }
//            }
//        }
//    }
//    delete [] visited;
//}
//
//int main() {
//    int V, E;
//    cin >> V >> E;
//    bool ** adj = new bool * [V];
//    for(int i=0;i<V;i++){
//        adj[i] = new bool [V];
//        for(int j=0;j<V;j++){
//            adj[i][j] = false;
//        }
//    }
//    bool visited[V];
//    memset(visited,false,sizeof visited);
//    for(int i=0;i<E;i++){
//        int s,d;
//        cin>>s>>d;
//        adj[s][d] = true;
//        adj[d][s] = true;
//    }
//    cout<<"BFS :\n";
//    BFS(adj,V);
//    cout<<endl<<endl;
//
//    for(int i=0;i<V;i++){
//        delete [] adj[i];
//    }
//    delete [] adj;
//    return 0;
//}
//
