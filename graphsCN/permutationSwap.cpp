//#include<bits/stdc++.h>
//using namespace std;
//
//void DFS(vector<int> adj[],int currNode,bool visited[],unordered_set<int> &x){
//    visited[currNode] = true;
//    x.insert(currNode);
//    for(int i=0;i<adj[currNode].size();i++){
//        if(!visited[adj[currNode][i]])
//            DFS(adj,adj[currNode][i],visited,x);
//    }
//}
//
//vector<unordered_set<int>>  getComponents(vector<int> adj [],int n){
//    bool visited[n];
//    vector<unordered_set<int>> output;
//    for(int i=0;i<n;i++) visited[i] = false;
//    
//    for(int i=0;i<n;i++){
//        if(!visited[i]){
//            unordered_set<int> x;
//            DFS(adj,i,visited,x);
//            output.push_back(x);
//        }
//    }
//    return output;
//}
//
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,y,x,flag=0;
//        cin>>n>>m;
//        int p[n],q[n];
//        for(int i=0;i<n;i++)
//            cin>>p[i];
//        for(int i=0;i<n;i++)
//            cin>>q[i];
//        vector<int> adj[n];
//        for(int i=0;i<m;i++){
//            cin>>x>>y;
//            adj[x-1].push_back(y-1);
//            adj[y-1].push_back(x-1);
//        }
//        vector<unordered_set<int>> out = getComponents(adj,n);
//        for(int i=0;i<out.size();i++){
//            unordered_set<int> set1,set2;
//            unordered_set<int>:: iterator it;
//            for(it = out[i].begin();it!=out[i].end();it++){
//                set1.insert(p[*it]);
//                set2.insert(q[*it]);
//            }
//            if(set1!=set2) {
//                flag=1;break;
//            }
//        }
//        if(flag==1) cout<<"NO"<<endl;
//        else cout<<"YES"<<endl;
//        
//    }
//    return 0;
//}
//
//
