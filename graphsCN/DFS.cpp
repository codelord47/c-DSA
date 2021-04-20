//#include <bits/stdc++.h>
//using namespace std;
//
//void DFSUtil(bool ** adj,int n,int currNode,bool * visited){
//    // print node and mark it as visited
//    cout<<currNode<<" ";
//    visited[currNode] = true;
//    for(int i=0;i<n;i++){
//        //if there is a neighbour of current node and is not visited call DFS on it
//        if(adj[currNode][i]&&!visited[i]){
//            DFSUtil(adj,n,i,visited);
//        }
//    }
//}
//
//void DFS(bool ** adj,int n){
//    // to keep xthe record for visited nodes
//    bool * visited = new bool [n];
//    for(int i=0;i<n;i++)
//        visited[i] = false;
//    cout<<"DFS :\n";
//    for(int i=0;i<n;i++){
//        if(!visited[i])
//            DFSUtil(adj, n, i, visited);
//    }
//    cout<<endl<<endl;
//}
//
//int main(){
//    int V,E,f,s;
//    // no. of vertices and no. of edges
//    cin>>V>>E;
//    // adjacency matrix
//    bool ** adj = new bool * [V];
//    for(int i=0;i<V;i++){
//        adj[i] = new bool [V];
//        for(int j=0;j<V;j++){
//            //initalize everyone as false -- no edges in starting
//            adj[i][j] = false;
//        }
//    }
//
//    for(int i=0;i<E;i++){
//        cin>>f>>s;
//        // mark edge from f -> s and s->f (undirected)
//        adj[f][s] = true;
//        adj[s][f] = true;
//    }
//    // Depth first Search
//    DFS(adj,V);
//    // free memory
//    for(int i=0;i<V;i++){
//        delete [] adj[i];
//    }
//    delete [] adj;
//
//    return 0;
//}
