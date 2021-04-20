    //#include <bits/stdc++.h>
    //using namespace std;
    //class edge {
    //public:
    //    int s,d,w;
    //};
    //bool compare(edge a,edge b){
    //    return (a.w<b.w);
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
    //    int n,m;
    //    cin>>n>>m;
    //    edge edges[m],originalEdges[m];
    //    map<edge,string> MAP;
    //    for(int i=0;i<m;i++){
    //        cin>>edges[i].s>>edges[i].d>>edges[i].w;
    //        originalEdges[i] = edges[i];
    //    }
    //    sort(edges,edges+m,compare);
    //    int rank[n],parent[n];
    //    memset(rank,0,sizeof rank);
    //    for(int i=0;i<n;i++) parent[i] = i;
    //    for(int i=0;i<m;i++){
    //        int p1 = findSetParent(edges[i].s, parent);
    //        int p2 = findSetParent(edges[i].d, parent);
    //        
    //    }
    //    return 0;
    //}
