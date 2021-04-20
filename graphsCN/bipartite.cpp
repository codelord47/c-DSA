//#include<bits/stdc++.h>
//using namespace std;
//
//bool DFS(vector<int> adj[],int el,bool visited[],set<int>color[],int currColor){
//    visited[el] = true;
//    color[currColor].insert(el);
//    for(int i=0;i<adj[el].size();i++){
//        int currEl = adj[el][i];
//        if(visited[currEl]) {
//            if(color[currColor].find(currEl)!=color[currColor].end()) return false;
//        }
//        else {
//            bool temp  = DFS(adj,currEl,visited,color,currColor^1);
//            if(temp == false) return false;
//        }
//    }
//    return true;
//}
//
//
//bool checkBipartitness(vector<int> adj[],int V){
//    set<int> color[2];
//    bool visited[V];
//    int currColor = 0;
//    memset(visited,false,sizeof visited);
//    for(int i=0;i<V;i++){
//        if(!visited[i]){
//            bool ans = DFS(adj,i,visited,color,currColor);
//            if(ans==false) return false;
//        }
//    }
//    return true;
//}
//
//int main(){
//    int V,E,x,y;
//    cin>>V>>E;
//    vector<int> adj[V];
//    for(int i=0;i<E;i++){
//        cin>>x>>y;
//        adj[x-1].push_back(y-1);
//        adj[y-1].push_back(x-1);
//    }
//    bool ans = checkBipartitness(adj,V);
//    cout<<endl;
//    if(ans) cout<<"BIPARTITE"<<endl;
//    else cout<<"NOT BIPARTITE"<<endl;
//    return 0;
//}
