
#include <bits/stdc++.h>
using namespace std;
 
#define endl  "\n"
#define int   long long
#define FAST  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef pair<int,int>   pii;
typedef vector<pii>     vii;
#define rep(i,n)        for(int i=0;i<(n);i++)
#define pb              push_back
#define ff              first
#define ss              second
#define sz(x)           ((int)(x).size())
#define all(x)          (x).begin(), (x).end()
#define INF             (long long) 1e13
#define MOD             1000000007
#define MAX             (int) 2e5+5
// for xor of a range
vector<int> tree(4*MAX, INT_MAX);
int arr[MAX];
void update(int v,int tl,int tr,int ind,int val){
    if(tl == tr  && tl == ind){
        arr[ind] = val;
        tree[v] = val;
        return;
    }
    if(ind < tl || tr < ind) return;
    int mid = (tl+tr)/2;
    update(2*v,tl,mid,ind,val);
    update(2*v+1,mid+1,tr,ind,val);
    tree[v] = tree[2*v]^tree[2*v+1];
}

int query(int v,int tl,int tr,int l,int r){
    if(tr < l || r < tl) return 0;
    if(l <= tl && tr <= r) return tree[v];
    int mid = (tl + tr)/2;
    int x = query(2*v,tl,mid,l,r);
    int y = query(2*v+1,mid+1,tr,l,r);
    return x^y;
}


int32_t main(){
    FAST
    int n,q,a,b;
    cin >> n >> q;
    rep(i,n) {
        cin >> a;
        update(1,0,n-1,i,a);
    }
    while(q--){
        int ch;
        // cin>>ch;
        cin >> a >> b;
        cout << query(1,0,n-1,a-1,b-1) << endl;            


    }
    

    return 0;
}







