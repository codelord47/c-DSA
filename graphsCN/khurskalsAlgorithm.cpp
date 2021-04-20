//#include <bits/stdc++.h>
//using namespace std;
//
//class edge{
//    public :
//    int s,e,w;
//};
//
//bool compare(edge e1,edge e2){
//    return e1.w<e2.w;
//}
//
////find the parent of this set
//int findSetParent(int x,int parent[]){
//    int temp = x;
//    while(temp!=parent[temp]){
//        temp = parent[temp];
//    }
//    // path compresssion
//    parent[x] = temp;
//    
//    return temp;
//}
//
////join these two sets by rank
//void unionSet(int p1,int p2,int parent[],int rank[]){
//    //if rank is greater then make smaller's parent big
//    if(rank[p1]>rank[p2]){
//        parent[p2] = p1;
//    } else if (rank[p1]<rank[p2]){
//        parent[p1] = p2;
//    } else {
//        rank[p1]++;
//        parent[p2] = p1;
//    }
//}
//
//int main(){
//    int V, E;
//    cin >> V >> E;
//    edge *edges=new edge[E];
//    for(int i=0;i<E;i++){
//        cin>>edges[i].s>>edges[i].e>>edges[i].w;
//    }
//    int rank[V];
//    int parent[V];
//    sort(edges,edges+E,compare);
//    for(int i=0;i<V;i++){
//        rank[i] = 0;
//        parent[i] = i;
//    }
//    
//    edge * MST=new edge[V-1];
//    int count=0,i=0;
//    while(count<V-1){
//        int p1 = findSetParent(edges[i].e,parent);
//        int p2 = findSetParent(edges[i].s,parent);
//        if(p1!=p2){
//            MST[count] = edges[i];
//            count++;
//            unionSet(p1,p2,parent,rank);
//        }
//        i++;
//    }
//    for(int i=0; i<V-1;i++){
//        if(MST[i].e>MST[i].s)
//            cout<<MST[i].s<<" "<<MST[i].e<<" ";
//        else
//            cout<<MST[i].e<<" "<<MST[i].s<<" ";
//        cout<<MST[i].w<<endl;
//    }
//  return 0;
//}
//
