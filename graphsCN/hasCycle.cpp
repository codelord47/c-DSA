//#include <bits/stdc++.h>
//using namespace std;
//const int MAXM = 100001;
//int n,m;
//vector<int> adj[MAXM];
//int visited[MAXM];
////returns true if a connected graph has cycles
//
//bool hasCycle(int node,int parent){
//    visited[node]=true;
//    for(int neigh : adj[node]){
//        if(!visited[neigh]){
//            if(hasCycle(neigh,node)) return true;
//        }else {
//            if(neigh!=parent) return true;
//        }
//    }
//    return false;
//    
//}
//
//int main(){
//    int x,y;
//    cin>>n>>m;
//    memset(visited,0,sizeof visited);
//    for(int i=0;i<m;i++){
//        cin>>x>>y;
//        adj[x].push_back(y);
//    }
//    cout<<hasCycle(1,-1)<<endl;
//    return 0;
//}
