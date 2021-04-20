//#include <bits/stdc++.h>
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
//int main(){
//    int n,m,x,y;
//    cin>>n>>m;
//    vector<int> adj[n];
//    for(int i=0;i<m;i++){
//        cin>>x>>y;
//        adj[x-1].push_back(y-1);
//        adj[y-1].push_back(x-1);
//    }
//    vector<unordered_set<int>> output = getComponents(adj,n);
//    for(int i=0;i<output.size();i++){
//        unordered_set<int>::iterator itr;
//        for(itr = output[i].begin();itr!=output[i].end();itr++){
//            cout<<(*itr)+1<<" ";
//        }
//        
//        cout<<endl;
//    }
//    return 0;
//}
