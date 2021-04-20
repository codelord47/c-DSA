//#include <bits/stdc++.h>
//using namespace std;
//
//class node {
//    public:
//    int a,b,i;
//    node (){
//        a = INT_MIN;
//        b = i = INT_MAX;
//    }
//};
//
//node fun(node L,node R){
//    node tree;
//    if(L.a>R.a) {
//        tree = L;
//    }
//    else if (L.a==R.a){
//        if(L.b<R.b)
//            tree = L;
//        else if (L.b==R.b){
//            if(L.i<R.i) tree = L;
//            else tree = R;
//        }
//        else tree = R;
//    }
//    else tree = R;
//    return tree;
//}
//
//void buildTree(int * ar,int * br,node * tree,int start,int end, int tn){
//    if(start == end) {
//       tree[tn].a = ar[start];
//       tree[tn].b = br[start];
//       tree[tn].i = start;
//       return;
//    }
//    int mid = (start + end)/2;
//    buildTree(ar,br, tree, start, mid, 2*tn);
//    buildTree(ar,br, tree, mid+1, end, 2*tn+1);
//    tree[tn] = fun(tree[2*tn],tree[2*tn+1]);
//}
//
//node queryRange(node * tree, int start,int end,int left,int right,int tn){
//    //completely outside the range
//    if(right<start||left>end) {
//        node temp;
//        return temp;
//    }
//    //completely inside the range -- return this ans
//    if(left<=start&&right>=end) return tree[tn];
//    //partially inside partially outside
//    int mid = (start + end)/2;
//    node ans1 = queryRange(tree,start,mid,left,right,2*tn);
//    node ans2 = queryRange(tree,mid+1,end,left,right,2*tn+1);
//       node ans = fun(ans1,ans2);
//    return  ans;
//}
//
//int main(){
//    int n;
//       cin>>n;
//    int a[n],b[n];
//    for(int i=0;i<n;i++) cin>>a[i];
//    for(int i=0;i<n;i++) cin>>b[i];
//    node tree[4*n+1];
//    buildTree(a,b,tree,0,n-1,1);
//    int q;
//    cin>>q;
//    while(q--){
//        int l,r;
//        cin>>l>>r;
//           node ans = queryRange(tree,0,n-1,l-1,r-1,1);
//           cout<<ans.i+1<<endl;
//    }
//    return 0;
//}
//
