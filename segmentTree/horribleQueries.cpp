//#include<bits/stdc++.h>
//using namespace std;
//typedef long long int ll;
//ll query(ll tree[],ll lazy[],ll start,ll end,ll left,ll right,ll node){
//    ll el = end-start+1;
//    if(lazy[node]!=0){
//        tree[node]+=lazy[node]*el;
//        if(start!=end){
//            lazy[node*2] += lazy[node];
//            lazy[node*2+1] += lazy[node];
//        }
//         lazy[node] = 0;
//    }
//    if(end<left||start>right)
//        return 0;
//    if(left<=start&&right>=end){
//        return tree[node];
//    }
//    ll mid = (start+end)/2;
//    ll a1 = query(tree,lazy,start,mid,left,right,node*2);
//    ll a2 = query(tree,lazy,mid+1,end,left,right,node*2+1);
//    return a1+a2;
//}
//
//void update(ll tree[],ll lazy[],ll start,ll end,ll left,ll right,ll inc,ll node){
//    if(start>end) return;
//    ll el = end-start+1;
//    if(lazy[node]!=0){
//        tree[node]+=lazy[node]*el;
//        if(start!=end){
//            lazy[node*2] += lazy[node];
//            lazy[node*2+1] += lazy[node];
//        }
//         lazy[node] = 0;
//    }
//    if(end<left||start>right)
//        return;
//    if(left<=start&&right>=end) {
//        tree[node]+=inc*el;
//        if(start!=end){
//            lazy[node*2]+=inc;
//            lazy[node*2+1]+=inc;
//        }
//        return;
//    }
//    ll mid = (start+end)/2;
//    update(tree, lazy, start, mid, left, right, inc, node*2);
//    update(tree, lazy, mid+1, end, left, right, inc, 1+node*2);
//    tree[node] = tree[node*2]+tree[node*2+1];
//}
//
//int main() {
//    ll t;
//    cin>>t;
//    while(t--){
//        ll n,c,ch,p,q,v;
//        cin>>n>>c;
//        ll tree[4*n+1],lazy[4*n+1];
//        memset(lazy,0,sizeof lazy);
//        memset(tree,0,sizeof tree);
//        while(c--){
//            cin>>ch;
//            if(ch==0) {
//                cin>>p>>q>>v;
//                p--;q--;
//                update(tree,lazy,0,n-1,p,q,v,1);
//            } else {
//                cin>>p>>q;
//                p--;q--;
//                cout<<query(tree,lazy,0,n-1,p,q,1)<<endl;
//            }
//        }
//    }
//}
//
