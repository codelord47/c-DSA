//#include<bits/stdc++.h>
//using namespace std;
//
//class node {
//    public:
//    int s,ms,bps,bss;
//    node (){
//        s = ms = bps = bss = -10000000;
//    }
//};
//
//int  max(int a,int b,int c){
//    return max(a,max(b,c));
//}
//
//
//node merge(node L,node R){
//    node res;
//    res.ms = max(L.ms,R.ms,L.bss+R.bps);
//    res.s = L.s+R.s;
//    res.bps = max(L.bps,L.s+R.bps);
//    res.bss = max(R.bss,R.s+L.bss);
//    return res;
//}
//
//void buildTree(int * arr, node * tree, int start,int end,int tn){
//    if(start==end) {
//        tree[tn].s = arr[start];
//        tree[tn].ms = arr[start];
//        tree[tn].bps = arr[start];
//        tree[tn].bss = arr[start];
//        return;
//    }
//    int mid = (start+end)/2;
//    buildTree(arr,tree,start,mid,tn*2);
//    buildTree(arr,tree,mid+1,end,tn*2+1);
//    tree[tn] = merge(tree[tn*2],tree[tn*2+1]);
//}
//
//node query(node * tree,int start,int end,int left,int right,int tn){
//    if(left<=start&&end<=right) {
//        return tree[tn];
//    }
//    if(right<start||end<left) {
//        node temp;
//        return temp;
//    }
//    int mid = (start+end)/2;
//    node L = query(tree,start,mid,left,right,tn*2);
//    node R = query(tree,mid+1,end,left,right,tn*2+1);
//    node res = merge(L,R);
//    return res;
//}
//
//
//int main() {
//
//    int n,m,x,y;
//    cin>>n;
//    int arr[n];
//    node tree[4*n+1];
//    for(int i=0;i<n;i++) cin>>arr[i];
//    buildTree(arr,tree,0,n-1,1);
//    cin>>m;
//    while(m--){
//        cin>>x>>y;
//        node ans = query(tree,0,n-1,x-1,y-1,1);
//        cout<<ans.ms<<endl;
//    }
//    return 0;
//}
