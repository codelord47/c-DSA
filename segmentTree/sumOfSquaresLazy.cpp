//#include<bits/stdc++.h>
//using namespace std;
//typedef pair<int,int> pii;
//#define F first
//#define S second
//void buildTree(pii tree[],int arr[],int start,int end,int node){
//    if (start==end){
//        tree[node].F = pow(arr[start],2);
//        tree[node].S = arr[start];
//        return;
//    }
//    int mid = (start+end)/2;
//    buildTree(tree,arr,start,mid,node*2);
//    buildTree(tree,arr,mid+1,end,1+node*2);
//    tree[node].F = tree[2*node].F + tree[node*2+1].F;
//    tree[node].S = tree[2*node].S + tree[node*2+1].S;
//}
//
//void check_first(pii tree[],pii lazy[],int start,int end,int node){
//    int els = end - start + 1;
//    if(lazy[node].S==-1){
//        if(start==end){
//            tree[node].F = pow(lazy[node].F,2);
//            tree[node].S = lazy[node].F;
//            lazy[node] = make_pair(0,0);
//        }else {
//            tree[node].F = pow(lazy[node].F,2)*els;
//            tree[node].S = lazy[node].F*els;
//            lazy[node*2+1] = lazy[node];
//            lazy[node*2] = lazy[node];
//            lazy[node] = make_pair(0,0);
//        }
//    }else if(lazy[node].S==1){
//        int add = lazy[node].F;
//        if(start==end){
//            tree[node].F+= els*pow(add,2) + 2*add*tree[node].S;
//            tree[node].S+=els*add;
//            lazy[node] = make_pair(0,0);
//            }else {
//            tree[node].F+= els*pow(add,2) + 2*add*tree[node].S;
//            tree[node].S+=els*add;
//            lazy[node*2+1] = lazy[node];
//            lazy[node*2] = lazy[node];
//            lazy[node] = make_pair(0,0);
//        }
//    }
//}
//
//void addInTree(pii tree[],pii lazy[],int start,int end,int left,int right,int inc,int node){
//    check_first(tree,lazy,start,end,node);
//    int els = end - start + 1;
//    if(end<left||start>right) return;
//    if(left<=start&&right>=end) {
//        tree[node].F+= els*pow(inc,2) + 2*inc*tree[node].S;
//        tree[node].S+=els*inc;
//        lazy[node*2+1] = make_pair(inc,1);
//        lazy[node*2] = make_pair(inc,1);
//        return;
//    }
//    int mid = (start+end)/2;
//    addInTree(tree, lazy, start, mid, left, right, inc, node*2);
//    addInTree(tree, lazy, mid+1, end, left, right, inc,1+ node*2);
//    tree[node].F = tree[2*node].F + tree[node*2+1].F;
//    tree[node].S = tree[2*node].S + tree[node*2+1].S;
//}
//
//void setInTree(pii tree[],pii lazy[],int start,int end,int left,int right,int set,int node){
//    check_first(tree, lazy, start, end, node);
//    if(end<left||start>right) return;
//    int els = end-start+1;
//    if(left<=start&&right>=end) {
//        tree[node].F= pow(set,2)*els;
//        tree[node].S= els*set;
//        lazy[node*2+1] = make_pair(set,-1);
//        lazy[node*2] = make_pair(set,-1);
//        return;
//    }
//    int mid = (start+end)/2;
//    setInTree(tree, lazy, start, mid, left, right, set, node*2);
//    setInTree(tree, lazy, mid+1, end, left, right, set,1+ node*2);
//    tree[node].F = tree[2*node].F + tree[node*2+1].F;
//    tree[node].S = tree[2*node].S + tree[node*2+1].S;
//}
//
//int queryInTree(pii tree[],pii lazy[],int start,int end,int left,int right,int node){
//    check_first(tree, lazy, start, end, node);
//    if(end<left||start>right) return 0;
//    if(left<=start&&right>=end) return tree[node].F;
//    int mid = (start+end)/2;
//    return
//        queryInTree(tree, lazy, start, mid, left, right, node*2)
//        +queryInTree(tree, lazy, mid+1, end, left, right, node*2+1);
//}
//int main() {
//
//    int t;
//    cin>>t;
//    for(int T=1;T<=t;T++){
//        cout<<"Case "<<T<<":"<<endl;
//        int n,q,l,r,c,x;
//        cin>>n>>q;
//        int arr[n];
//        for(int i=0;i<n;i++) cin>>arr[i];
//        pii tree[4*n+1],lazy[4*n+1];
//        memset(lazy,0,sizeof lazy);
//        buildTree(tree,arr,0,n-1,1);
//        for(int Q=0;Q<q;Q++){
//            cin>>c;
//            if(c==2) {
//                cin>>l>>r;
//                l--;r--;
//                cout<<queryInTree(tree,lazy,0,n-1,l,r,1)<<endl;
//            } else if (c==1) {
//                cin>>l>>r>>x;
//                l--;r--;
//                addInTree(tree,lazy,0,n-1,l,r,x,1);
//            } else {
//                cin>>l>>r>>x;
//                l--;r--;
//                setInTree(tree,lazy,0,n-1,l,r,x,1);
//            }
//        }
//    }
//}
