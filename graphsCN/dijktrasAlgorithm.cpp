////we can use adjaceny list if the graph is sparse
//// it will bring down the complexity from O(V^2) to O(VlogV+E)
//
//#include <bits/stdc++.h>
//using namespace std;
//const int MAX = 10000;
//
//void dijktra(int adj[][MAX],int V){
//    // distance array stores the distance from 0
//    //minVertex at each iteration stores the unvisited Vertex with minm distance
//    int distance[V],visited[V],minVertex=0;
//    //set is used to bring down the complexity to O(logn)
//    //set stores using binary search tree in order
//    // so we use pairs in set which store distances from ith index and ith index;
//    // distance are first attribute so they are already stored in sorted order
//    set<pair<int,int>> distInd;
//    //intialize
//    for(int i=0;i<V;i++){
//        visited[i]=0;
//        distance[i]=INT_MAX;
//    }
//    //insert first index (0)
//    distInd.insert({0,0});
//    distance[0] = 0;
//    
//    for(int k=0;k<V-1;k++){
//        // find the first minm distance in set
//        minVertex = distInd.begin()->second;
//        visited[minVertex] = 1;
//        //erase it since we have visited this vertex
//        distInd.erase(distInd.begin());
//        
//        //choose all its unvisited neighbours
//        for(int i=0;i<V;i++){
//            if(adj[minVertex][i]!=0&&!visited[i]){
//                // if we found a better distance via this index
//                if(distance[i]>distance[minVertex]+adj[minVertex][i]){
//                    //delete prev. distance
//                    distInd.erase({distance[i],i});
//                    // mark this distance
//                    distance[i]=distance[minVertex]+adj[minVertex][i];
//                    //add this (distance,i) in set
//                    distInd.insert({distance[i],i});
//                }
//            }
//        }
//    }
//    cout<<endl;
//    for(int i=0;i<V;i++){
//        cout<<i<<" "<<distance[i]<<endl;
//    }
//    cout<<endl;
//}
//
//
//int main(){
//    int V,E,x,y,w;
//    cin>>V>>E;
//    int adj[V][MAX];
//    memset(adj, 0, sizeof adj);
//    for(int i=0;i<E;i++){
//        cin>>x>>y>>w;
//        adj[x][y] = w;
//        adj[y][x] = w;
//    }
//    
//    dijktra(adj,V);
//    return 0 ;
//}
//
