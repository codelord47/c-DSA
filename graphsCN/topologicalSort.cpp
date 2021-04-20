//#include <bits/stdc++.h>
//using namespace std;
//vector<int> adj[101];
//int in[101];
//vector<int> ans;
//
//void kahns(int n,int m){
//    queue<int> que;
//    for(int i=1;i<=n;i++){
//        if(in[i]==0) que.push(i);
//    }
//    while(!que.empty()){
//        int node = que.front();
//        que.pop();
//        ans.push_back(node);
//        for(int neigh:adj[node]){
//            in[neigh]--;
//            if(in[neigh]==0){
//                que.push(neigh);
//            }
//        }
//    }
//    cout<<"Topological Sort : ";
//    for(auto x:ans){
//        cout<<x<<" ";
//    }
//    cout<<endl;
//}
//
//
//int main(){
//    int n,m,x,y;
//    cin>>n>>m;
//    for(int i=1;i<101;i++) in[i]=0;
//    for(int i=0;i<m;i++){
//        cin>>x>>y;
//        adj[x].push_back(y);
//        in[y]++;
//    }
//    kahns(n,m);
//    return 0;
//}
