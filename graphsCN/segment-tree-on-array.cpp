
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
#define MAX             (int) 1e5+5
vector<vector<bool>> tree(4*MAX,vector<bool>(26,0));

void update(int node,int tl,int tr,int in,int val){
    if(tl == tr && tr == in){
        for(int i=0;i<26;i++) tree[node][i] = 0;
        tree[node][val] = 1;
        return;
    }
    if(in < tl || tr < in) return;
    int md = (tl+tr)/2;
    update(node*2,tl,md,in,val);
    update(node*2+1,md+1,tr,in,val);
    for(int i=0;i<26;i++){
        tree[node][i] = tree[node*2][i] | tree[node*2 + 1][i];
    }
}

vector<bool> query(int node,int tl,int tr,int l,int r){
    if(tr < l || r < tl) {
        vector<bool> v(26,0);
        return v;
    }
    if(l<=tl && tr<=r) return tree[node];
    int md = (tl+tr)/2;
    vector<bool> x = query(node*2,tl,md,l,r);
    vector<bool> y = query(node*2+1,md+1,tr,l,r);
    vector<bool> v(26,0);
    for(int i=0;i<26;i++){
        v[i] = x[i] | y[i];
    }
    return v;
}


int32_t main(){
    FAST
    int q;
    string s;
    cin>>s>>q;
    int n = s.size();
    for(int i=0;i<n;i++){
        update(1,0,n-1,i,s[i]-'a');
    }
    while(q--){
        int c;
        cin>>c;
        if(c == 1){
            int ind;
            char cc;
            cin>>ind>>cc;
            update(1,0,n-1,ind-1,cc-'a');
        }else{
            int l,r;
            cin>>l>>r;
            vector<bool> x = query(1,0,n-1,l-1,r-1);
            int ans = 0;
            for(bool y : x) if(y) ans++;
            cout << ans << endl;
        }
    }

    
    return 0;
}







