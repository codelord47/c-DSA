//// TO FIND AND PRINT ALL CONNECTED COMPONENTS
//#include <bits/stdc++.h>
//using namespace std;
//
//typedef vector<int> vi;
//typedef vector<vector<int>> vvi;
//// normal dfs function which stores the nodes of this connected comp in temp
//void DFS(bool ** adj,int V, bool * visited, int sv,vi &temp){
//    visited[sv] = true;
//    temp.push_back(sv);
//    for(int i=0;i<V;i++){
//        if(adj[sv][i]&&!visited[i]) DFS(adj,V,visited,i,temp);
//    }
//    
//}
//
//vvi AllConnectedComponents(bool ** adj,int V){
//    bool * visited = new bool [V];
//    for(int i=0;i<V;i++) visited[i] = false;
//    // store the vectors of connected components
//    vvi ans;
//    for(int i=0;i<V;i++){
//        //if this node is not visited -> this has its seperate connected comp
//        if(!visited[i]){
//            // store this connected comp in temp
//            vi temp;
//            DFS(adj,V,visited,i,temp);
//            //add this comp in ans
//            ans.push_back(temp);
//        }
//    }
//    return ans;
//}
//
//int main()
//{
//    int V,E,s,d;
//    cin>>V>>E;
//    bool **adj = new bool * [V];
//    for(int i=0;i<V;i++){
//        adj[i] = new bool[V];
//        for(int j=0;j<V;j++) adj[i][j] = false;
//    }
//    for(int i=0;i<E;i++){
//        cin>>s>>d;
//        adj[s][d] = true;
//        adj[d][s] = true;
//    }
//    vvi comp = AllConnectedComponents(adj,V);
//    for(int i=0;i<comp.size();i++){
//        for(int j=0;j<comp[i].size();j++){
//            cout<<comp[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    for(int i=0;i<V;i++){
//        delete [] adj[i];
//    }
//    delete [] adj;
//      return 0;
//}
//
