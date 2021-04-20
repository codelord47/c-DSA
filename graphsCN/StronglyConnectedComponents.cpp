//#include <unordered_set>
//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//
//void dfs1(vector<int> adj[],int el,bool visited[],stack<int> &stk){
//    visited[el] = true;
//    for(int i=0;i<adj[el].size();i++){
//        if(!visited[adj[el][i]]){
//            dfs1(adj,adj[el][i],visited,stk);
//        }
//    }
//    stk.push(el);
//}
//
//void dfs2(vector<int> adjT[],int el,bool visited[],unordered_set<int> & comp){
//    visited[el] = true;
//    comp.insert(el);
//    for(int i=0;i<adjT[el].size();i++){
//        if(!visited[adjT[el][i]])
//            dfs2(adjT, adjT[el][i], visited, comp);
//    }
//}
//
//vector<unordered_set<int>> getSCC(vector<int> adj[],vector<int> adjT[],int V){
//    vector<unordered_set<int>> output;
//    bool visited[V];
//    memset(visited,false,sizeof visited);
//    stack<int> stk;
//    for(int i=0;i<V;i++){
//        if(!visited[i]){
//            dfs1(adj,i,visited,stk);
//        }
//    }
//    memset(visited,false,sizeof visited);
//    while(!stk.empty()){
//        int el = stk.top();
//        stk.pop();
//        if(!visited[el]){
//            unordered_set<int> comp;
//            dfs2(adjT,el,visited,comp);
//            output.push_back(comp);
//        }
//    }
//    return output;
//}
//
//int main(){
//    int V,E,x,y;
//    cin>>V>>E;
//    vector<int> adj[V];
//    vector<int> adjT[V];
//    for(int i=0;i<E;i++){
//        cin>>x>>y;
//        adj[x-1].push_back(y-1);
//        adjT[y-1].push_back(x-1);
//    }
//    cout<<endl;
//    vector<unordered_set<int>> out = getSCC(adj,adjT,V);
//    for(int i = 0;i<out.size();i++){
//        unordered_set<int>::iterator it;
//        for(it =out[i].begin();it!=out[i].end();it++){
//            cout<<(*it)+1<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
