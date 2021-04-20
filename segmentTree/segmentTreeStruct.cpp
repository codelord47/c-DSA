#include <bits/stdc++.h>
using namespace std;

struct segtree {
public:
    vector<long long> seg;
    int size;
    void init(int n){
        size=1;
        while(size<n) {
            size*=2;
        }
        seg.assign(2*size, 0LL);
    }
    
    void build(vector<int> &a,int x,int lx,int rx){
        if(rx-lx==1) {
            if(x<(int)a.size()) {
                seg[x]= a[lx];
            }
            return;
        }
        int m = (lx+rx)/2;
        build(a,2*x+1,lx,m);
        build(a,2*x+2,m,rx);
        seg[x] = seg[2 * x + 1] + seg[2 * x + 2];
    }
    
    void build(vector<int> a){
        build(a,0,0,size);
    }
    
    void set(int in,int val,int x,int lx,int rx){
        if(rx-lx==1){
            seg[x]=val;
            return;
        }
        int mid = (lx+rx)/2;
        if(in<mid){
            set(in,val,2*x+1,lx,mid);
        }else {
            set(in,val,2*x+2,mid,rx);
        }
        seg[x] = seg[2*x+1] + seg[2*x+2];
    }
    
    void set(int in,int v){
        set(in,v,0,0,size);
    }
    
    long long sums(int l,int r,int x,int lx,int rx){
        if(rx<=l||r<=lx) return 0;
        if(lx>=l&&rx<=r) return seg[x];
        int mid = (lx+rx)/2;
        return sums(l, r, 2*x+1, lx, mid)+sums(l, r, 2*x+2,mid, rx);
    }
    
    long long sums(int l,int r){
        return sums(l,r,0,0,size);
    }
    
};

int main(){
    int n,m;
    cin>>n>>m;
    segtree st;
    st.init(n);
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    st.build(a);
    int op;
    while(m--){
        cin>>op;
        if(op==1){
            int i,v;
            cin>>i>>v;
            st.set(i,v);
        }else {
            int l,r;
            cin>>l>>r;
            cout<<st.sums(l,r)<<endl;
        }
    }
    return 0;
}
