//#include<bits/stdc++.h>
//using namespace std;
//typedef pair<int,int> pii;
//void buildTree(int * arr,pii * tree,int start, int end, int node){
//   if(start==end) {
//       pii  temp;
//       temp.first = arr[start];
//       temp.second = 0;
//       tree[node] = temp;
//       return;
//   }
//   int mid = (start + end)/2;
//   buildTree(arr,tree,start,mid,2*node);
//   buildTree(arr,tree,mid+1,end,2*node+1);
//   int a[4];
//    a[0] = tree[2*node].first;
//    a[1] = tree[2*node].second;
//    a[2] = tree[2*node+1].first;
//    a[3] = tree[2*node+1].second;
//    sort(a,a+4);
//    tree[node].first = a[2];
//    tree[node].second = a[3];
//}
//
//pii query(pii * tree ,int start,int end,int left,int right,int node){
//   if(right<start||left>end) return make_pair(0,0);
//   if(left<=start&&right>=end) return tree[node];
//   int mid = (start+end)/2;
//   pii op1 = query(tree,start,mid,left,right,node*2);
//   pii op2 = query(tree,mid+1,end,left,right,node*2+1);
//   int a[4];
//    a[0] = op1.first;
//    a[1] = op1.second;
//    a[2] = op2.first;
//    a[3] = op2.second;
//    sort(a,a+4);
//    return make_pair(a[2],a[3]);
//}
//void update(int * arr,pii * tree,int start, int end, int node,int indx,int val){
//   if(start == end) {
//       arr[indx] = val;
//       tree[node] = make_pair(val,0);
//       return;
//   }
//   int mid = (start+end)/2;
//   if(indx>mid) {
//       update(arr,tree,mid+1,end,node*2+1,indx,val);
//   } else {
//       update(arr,tree,start,mid,node*2,indx,val);
//   }
//   int a[4];
//    a[0] = tree[2*node].first;
//    a[1] = tree[2*node].second;
//    a[2] = tree[2*node+1].first;
//    a[3] = tree[2*node+1].second;
//    sort(a,a+4);
//    tree[node].first = a[2];
//    tree[node].second = a[3];
//}
//
//
//int main() {
//
//   int n,q,l,r;
//   char x;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//       cin>>arr[i];
//   }
//   pii tree[4*n+1];
//   buildTree(arr,tree,0,n-1,1);
//    cin>>q;
//   while(q--){
//       cin>>x;
//       if(x=='Q') {
//           cin>>l>>r;
//           pii ans = query(tree,0,n-1,l-1,r-1,1);
//           cout<<ans.first+ans.second<<endl;
//       } else {
//           int indx,val;
//           cin>>indx>>val;
//           update(arr,tree,0,n-1,1,indx-1,val);
//       }
//   }
//}
//
