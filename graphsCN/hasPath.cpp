//#include <bits/stdc++.h>
//using namespace std;
//
//bool hasPath(bool ** adj,int V,bool * visited,int v1,int v2){
//    // if reached the final node return true
//    if (v1==v2) return true;
//    // on the node so mark it visited
//    visited[v1] = true;
//    //find if there is a path from this node's neighbours (which are not visited) if there is return true
//    for(int i=0;i<V;i++){
//        if(adj[v1][i]&&!visited[i]){
//            bool ans =  hasPath(adj,V,visited,i,v2);
//            if (ans==true) return true;
//        }
//    }
//    //if there is no neighbour which has path to final node -> no path from this node so return false
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
//    bool ans = hasPath(adj,V,visited,v1,v2);
//    if(ans) cout<<"true\n";
//    else cout<<"false\n";
//    for(int i=0;i<V;i++){
//        delete [] adj[i];
//    }
//    delete [] adj;
//
//    return 0;
//}
//
