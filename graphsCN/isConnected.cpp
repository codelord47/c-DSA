//#include <bits/stdc++.h>
//using namespace std;
//
//void DFSUtil(bool ** adj,int V,bool * visited,int sv){
//    visited[sv] = true;
//    for(int i=0;i<V;i++){
//        if(adj[sv][i]&&!visited[i]) DFSUtil(adj,V,visited,i);
//    }
//}
//
//bool isConnected(bool ** adj,int V){
//    bool * visited = new bool [V];
//    for(int i=0;i<V;i++) visited[i] = false;
//    // call DFS function on node one
//    // if the graph consists of one connected component only then all the nodes will be marked visited
//    DFSUtil(adj,V,visited,0);
//    int flag=1;
//    // if there exists any node which is not visited then return false
//    for(int i=0;i<V;i++){
//        if(!visited[i]) flag=0;
//    }
//    delete [] visited;
//    if(flag==0) return false;
//    return true;
//}
//
//int main(){
//    int V,E,f,s;
//    cin>>V>>E;
//
//    bool ** adj = new bool * [V];
//    for(int i=0;i<V;i++){
//        adj[i] = new bool [V];
//        for(int j=0;j<V;j++){
//            adj[i][j] = false;
//        }
//    }
//
//    for(int i=0;i<E;i++){
//        cin>>f>>s;
//        adj[f][s] = true;
//        adj[s][f] = true;
//    }
//
//    if(isConnected(adj, V)){
//        cout<<"true"<<endl;
//    }
//    else cout<<"false"<<endl;
//
//    for(int i=0;i<V;i++){
//        delete [] adj[i];
//    }
//    delete [] adj;
//
//    return 0;
//}
