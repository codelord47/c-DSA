//#include<bits/stdc++.h>
//using namespace std;
//typedef pair<int,int> pii;
//
//void buildTree(int * arr,pii * tree,int start,int end,int node){
//    if(start==end){
//        if (arr[start]%2==0) tree[node] = make_pair(0,1);
//        else tree[node] = make_pair(1,0);
//        return;
//    }
//    int mid = (start+end)/2;
//    buildTree(arr,tree,start,mid,node*2);
//    buildTree(arr,tree,mid+1,end,node*2+1);
//    tree[node].first = tree[node*2].first + tree[node*2+1].first;
//    tree[node].second = tree[node*2].second + tree[node*2+1].second;
//}
//
//void update(int *arr,pii*tree,int start,int end,int indx,int val,int node){
//    if(start==end) {
//        arr[start]=val;
//        if(val%2==0) tree[node] = make_pair(0,1);
//        else tree[node] = make_pair(1,0);
//        return;
//    }
//    int mid = (start+end)/2;
//    if(mid<indx) {
//        update(arr,tree,mid+1,end,indx,val,node*2+1);
//    }
//    else  update(arr,tree,start,mid,indx,val,node*2);
//    tree[node].first = tree[node*2].first + tree[node*2+1].first;
//    tree[node].second = tree[node*2].second + tree[node*2+1].second;
//}
//
//pii query(pii* tree,int start,int end,int left,int right,int node){
//    if(right<start||left>end) return make_pair(0,0);
//    if(left<=start&&right>=end) return tree[node];
//    int mid = (start+end)/2;
//    pii op1 = query(tree,start,mid,left,right,node*2);
//    pii op2 = query(tree,mid+1,end,left,right,node*2+1);
//    pii ans;
//    ans.first = op1.first+op2.first;
//    ans.second = op1.second+op2.second;
//    return ans;
//}
//
//int main() {
//
//    int n,q,c,indx,val,l,r;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++) cin>>arr[i];
//    pii tree[4*n+1];
//    buildTree(arr,tree,0,n-1,1);
//    cin>>q;
//    while(q--){
//        cin>>c;
//        if(c==0){
//            cin>>indx>>val;
//            update(arr,tree,0,n-1,indx-1,val,1);
//        } else {
//            cin>>l>>r;
//            pii ans = query(tree,0,n-1,l-1,r-1,1);
//            if(c==1) {
//                cout<<ans.second<<endl;
//            } else {
//                cout<<ans.first<<endl;
//            }
//        }
//    }
//    return 0;
//}
