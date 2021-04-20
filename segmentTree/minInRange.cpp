//#include<bits/stdc++.h>
//using namespace std;
//
//void buildTree(int * arr,int * tree,int start, int end, int node){
//    if(start==end) {
//        tree[node] = arr[start];
//        return;
//    }
//    int mid = (start + end)/2;
//    buildTree(arr,tree,start,mid,2*node);
//    buildTree(arr,tree,mid+1,end,2*node+1);
//    tree[node] = max(tree[node*2],tree[node*2+1]);
//}
//
//int query(int * tree ,int start,int end,int left,int right,int node){
//    if(right<start||left>end) return INT_MAX;
//    if(left<=start&&right>=end) return tree[node];
//    int mid = (start+end)/2;
//    int op1 = query(tree,start,mid,left,right,node*2);
//    int op2 = query(tree,mid+1,end,left,right,node*2+1);
//    return max(op1,op2);
//}
//void update(int * arr,int * tree,int start, int end, int node,int indx,int val){
//    if(start == end) {
//        arr[indx] = val;
//        tree[node] = val;
//        return;
//    }
//    int mid = (start+end)/2;
//    if(indx>mid) {
//        update(arr,tree,mid+1,end,node*2+1,indx,val);
//    } else {
//        update(arr,tree,start,mid,node*2,indx,val);
//    }
//    tree[node] = max(tree[node*2+1],tree[node*2]);
//}
//
//
//int main() {
//
//    int n,q,l,r;
//    char x;
//    cin>>n>>q;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int tree[4*n+1];
//    buildTree(arr,tree,0,n-1,1);
//    
//    while(q--){
//        cin>>x;
//        if(x=='q') {
//            cin>>l>>r;
//            cout<<query(tree,0,n-1,l-1,r-1,1)<<endl;
//        } else {
//            int indx,val;
//            cin>>indx>>val;
//            update(arr,tree,0,n-1,1,indx-1,val);
//        }
//    }
//}
