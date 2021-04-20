//#include <bits/stdc++.h>
//using namespace std;
//
//void primsAlgo(int edges[][10000],int V){
//    int parent[V],weight[V],visited[V];
//    for(int i=0;i<V;i++){
//        weight[i] = INT_MAX;
//        visited[i] = 0;
//    }
//    weight[0]=0;parent[0] =-1;
//    //minVertix -> vertex which is not visited and has minm of an edge
//    //mw - > minm weight helps to find the minVertex
//    int mw=INT_MAX,minVertex=0;
//    
//    //selecting each vertex at time (v-1) since 1 vertex is already selected(0)
//    for(int k=0;k<V-1;k++){
//        mw = INT_MAX;
//        for(int i=0;i<V;i++) {
//            //if this vertex is not visited and has minm weight of edge
//            if(!visited[i]) {
//                if(mw>weight[i]){
//                    minVertex = i;
//                    mw = weight[i];
//                }
//            }
//        }
//        //mark this visited
//        visited[minVertex] = 1;
//        //explore all vertex of minVertex
//        for(int i = 0;i<V;i++){
//            //find a neighbour which is unvisited and its weight is greater than
//            // offered weight
//            if(edges[minVertex][i]!=0&&!visited[i]&&weight[i]>edges[minVertex][i]){
//                //remove the edge that connects this vertix(i) to the graph and add this edge because we found an better way to get to this node and since its parent is already at best way until now
//                weight[i] = edges[minVertex][i];
//                //make this i node's parent minVertex
//                parent[i] = minVertex;
//            }
//        }
//    }
//    for(int i=1;i<V;i++){
//        if(parent[i]>i)
//            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
//        else
//            cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
//    }
//}
//
//int main()
//{
//    int V, E,x,y,w;
//    cin >> V >> E;
//    //adjacency list
//    int edges[V][10000];
//    memset(edges,0,sizeof edges);
//    for(int i=0;i<E;i++){
//        cin>>x>>y>>w;
//        edges[x][y] = w;
//        edges[y][x] = w;
//    }
//    primsAlgo(edges,V);
//    
//    
//  return 0;
//}
//
//
