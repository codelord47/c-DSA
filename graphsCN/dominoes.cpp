//#include<bits/stdc++.h>
//using namespace std;
//
//bool compare(vector<int> a,vector<int> b){
//    return a.size()<b.size();
//}
//
//void dfs1(vector<int> adj[],int el,bool visited[]){
//    visited[el] = true;
//    for(int i=0;i<adj[el].size();i++){
//        if(!visited[adj[el][i]]){
//            dfs1(adj,adj[el][i],visited);
//        }
//    }
//}
//
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--){
//        int V,E,x,y,count=0;
//        cin>>V>>E;
//        vector<int> adj[V];
//        
//        for(int i=0;i<E;i++){
//            cin>>x>>y;
//            adj[x-1].push_back(y-1);
//        }
//        bool visited[V];
//        memset(visited,false,sizeof visited);
//        sort(adj,adj+V,compare);
//        for(int i=0;i<V;i++){
//            if(!visited[i]){
//                count++;
//                dfs1(adj,i,visited);
//            }
//        }
//        cout<<count<<endl;
//    }
//    return 0;
//}
//
