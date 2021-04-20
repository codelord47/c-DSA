//#include <bits/stdc++.h>
//using namespace std;
//
//void buildTree(int * arr,int * tree,int s,int e,int tn){
//    if(s==e) {
//        tree[tn] = arr[s];
//        return;
//    }
//    int m = (s+e)/2;
//    buildTree(arr, tree, s, m, tn*2);
//    buildTree(arr,tree,m+1,e,tn*2+1);
//    tree[tn] = min(tree[tn*2],tree[tn*2+1]);
//}
//
//void updateRange(int * tree,int * lazy,int low,int high,int start,int end,int currPos,int inc){
//    if(low>high) return;
//    if(lazy[currPos]!=0){
//        
//    } else {
//        tree[currPos] +=lazy[currPos];
//        if(low!=high) {
//            lazy[2*currPos] +=lazy[currPos];
//            lazy[2*currPos+1] +=lazy[currPos];
//        }
//        lazy[currPos] = 0;
//    }
//    //no overlap
//    if(start>high||end<low) return ;
//    //full overlap
//    if(start<=low&&high<=end){
//        tree[currPos] +=inc;
//        if(low!=high) {
//            lazy[2*currPos] +=inc;
//            lazy[2*currPos+1] +=inc;
//        }
//        return;
//    }
//    // partial overlap
//    int mid = (low+high)/2;
//    updateRange(tree, lazy, low, mid, start, end, currPos*2, inc);
//    updateRange(tree, lazy, mid+1, end, start, end, currPos*2+1, inc);
//    tree[currPos] = min(tree[2*currPos],tree[2*currPos+1]);
//}
//
//int main(){
//    int n = 4;
//    int arr[] = {1,3,-2,4};
//    int tree[4*n+1];
//    int lazy[4*n+1];
//    memset(lazy,0,sizeof lazy);
//    buildTree(arr,tree,0,n-1,1);
//    updateRange(tree, lazy, 0, n-1, 0, 3, 1, 3);
//    cout<<"Segment Tree:\n";
//    for(int i=1;i<=4*n;i++)
//        cout<<tree[i]<<" ";
//    cout<<endl;
//    cout<<"Lazy Tree:\n";
//    for(int i=1;i<=4*n;i++)
//        cout<<lazy[i]<<" ";
//    cout<<endl;
//    
//    updateRange(tree, lazy, 0, n-1, 0, 1, 1, 2);
//    cout<<"Segment Tree:\n";
//    for(int i=1;i<=4*n;i++)
//        cout<<tree[i]<<" ";
//    cout<<endl;
//    cout<<"Lazy Tree:\n";
//    for(int i=1;i<=4*n;i++)
//        cout<<lazy[i]<<" ";
//    cout<<endl;
//    
//}
