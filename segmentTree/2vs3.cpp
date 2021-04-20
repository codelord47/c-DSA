//#include <bits/stdc++.h>
//using namespace std;
//
//int power[100001];
//
//void buildTree(string s,int * tree,int start,int end,int tn){
//    if(start==end) {
//        if(s[start]=='1') tree[tn] = 1;
//        else tree[tn] = 0;
//        return;
//    }
//    int mid = (start+end)/2;
//    buildTree(s,tree,start,mid,tn*2);
//    buildTree(s,tree,mid+1,end,tn*2+1);
//    tree[tn] = (((tree[tn*2]%3)*power[end-mid])%3 + tree[tn*2+1]%3)%3;
//}
//
//int query(int * tree,int start,int end,int left,int right,int tn){
//    if(right<start||end<left) return 0;
//    if(left<=start&&right>=end) return tree[tn];
//    int mid = (start+end)/2;
//    int  op1 = query(tree,start,mid,left,right,tn*2);
//    int  op2 = query(tree,mid+1,end,left,right,tn*2+1);
//    int  res = (((op1%3)*power[right-mid])%3 + op2%3)%3;
//    return res;
//}
//
//void update(string s,int *tree,int start,int end,int tn,int indx){
//    if(start==end){
//        tree[tn] = 1;
//        s[start] = '1';
//        return;
//    }
//    int mid = (start+end)/2;
//    if(mid<indx){
//        update(s,tree,mid+1,end,tn*2+1,indx);
//    } else {
//        update(s,tree,start,mid,tn*2,indx);
//    }
//    tree[tn] = (((tree[tn*2]%3)*power[end-mid])%3+tree[tn*2+1]%3)%3;
//}
//
////n - string  - q - q(0,2,4) c l r q (1,1)  c index
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    power[0] = 1;
//    for(int i=1;i<100001;i++){
//        power[i] = ((power[i-1]%3)*(2%3))%3;
//    }
//    
//    int n,q,l,r,c,indx;
//    cin>>n;
//    string s;
//    cin>>s;
//    int  tree[4*n+1];
//    buildTree(s,tree,0,n-1,1);
//    cin>>q;
//    while(q--){
//        cin>>c;
//        if(c==0) {
//            cin>>l>>r;
//            int ans  = query(tree,0,n-1,l,r,1);
//            cout<<ans<<endl;
//            
//        } else {
//            cin>>indx;
//            update(s,tree,0,n-1,1,indx);
//        }
//    }
//    return 0;
//}
//
