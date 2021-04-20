//#include <bits/stdc++.h>
//using namespace std;
//
//void buildTree(int tree[],int arr[],int start,int end,int treeNode){
//    if(start==end)  {
//        tree[treeNode] = arr[start];
//        return;
//    }
//    int mid = (start+end)/2;
//    buildTree(tree, arr, start, mid, 2*treeNode);
//    buildTree(tree, arr, mid+1, end, 2*treeNode+1);
//    tree[treeNode] = min(tree[treeNode*2],tree[treeNode*2+1]);
//}
//
//int queryTree(int tree[],int lazy[],int start,int end,int left,int right,int node){
//    if(lazy[node]!=0){
//        tree[node]+=lazy[node];
//        if(start!=end){
//            lazy[node*2] = lazy[node];
//            lazy[node*2+1] = lazy[node];
//        }
//         lazy[node] = 0;
//    }
//    if(end<left||start>right)
//        return INT_MAX;
//    if(left<=start&&right>=end){
//        return tree[node];
//    }
//    int mid = (start+end)/2;
//    int a1 = queryTree(tree,lazy,start,mid,left,right,node*2);
//    int a2 = queryTree(tree,lazy,mid+1,end,left,right,node*2+1);
//    return min(a1,a2);
//}
//
//void updateTree(int tree[],int lazy[],int start,int end,int left,int right,int inc,int node){
//    if(start>end) return;
//    if(lazy[node]!=0){
//        tree[node]+=lazy[node];
//        if(start!=end){
//            lazy[node*2] += lazy[node];
//            lazy[node*2+1] += lazy[node];
//        }
//         lazy[node] = 0;
//    }
//    if(end<left||start>right)
//        return;
//    if(left<=start&&right>=end) {
//        tree[node]+=inc;
//        if(start!=end){
//            lazy[node*2]+=inc;
//            lazy[node*2+1]=inc;
//        }
//        return;
//    }
//    int mid = (start+end)/2;
//    updateTree(tree, lazy, start, mid, left, right, inc, node*2);
//    updateTree(tree, lazy, mid+1, end, left, right, inc, 1+node*2);
//    tree[node] = min(tree[node*2],tree[node*2+1]);
//}
//
//int main(){
//    int n,c,t,l,r,inc;
//    n= 5;
//    int arr[] = {1,3,-2,4,-5};
//    int tree[4*n+1];
//    int lazy[4*n+1];
//    memset(lazy, 0, sizeof lazy);
//    buildTree(tree,arr,0,n-1,1);
//    cout<<"Segment Tree : ";
//    for(int i=1;i<10;i++) cout<<tree[i]<<" ";
//    cout<<endl;
//    cout<<"Lazy Tree : ";
//    for(int i=1;i<10;i++) cout<<lazy[i]<<" ";
//    cout<<endl;
//    updateTree(tree, lazy, 0, n-1, 1, 3, 5, 1);
//    cout<<"Segment Tree : ";
//    for(int i=1;i<10;i++) cout<<tree[i]<<" ";
//    cout<<endl;
//    cout<<"Lazy Tree : ";
//    for(int i=1;i<10;i++) cout<<lazy[i]<<" ";
//    cout<<endl;
//    updateTree(tree, lazy, 0, n-1, 2, 4, -3, 1);
//    cout<<"Segment Tree : ";
//    for(int i=1;i<10;i++) cout<<tree[i]<<" ";
//    cout<<endl;
//    cout<<"Lazy Tree : ";
//    for(int i=1;i<10;i++) cout<<lazy[i]<<" ";
//    cout<<endl;
//    
//}
