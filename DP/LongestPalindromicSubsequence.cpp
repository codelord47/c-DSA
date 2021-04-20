#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int LPS(string s,int start,int end,int &len,int &left){
    if(start>end) return 0;
    if(start == end ) return 1;
    if(dp[start][end]!=-1) return dp[start][end];

    int ans;
    if(s[start]==s[end]) ans = 2 + LPS(s, start + 1, end - 1,len,left);
    else ans = max(LPS(s,start,end-1),LPS(s,start+1,len,left));
    dp[start][end]=ans;
    return ans;
}

void solve(){
    string s;
    cin>>s;
    memset(dp,-1,sizeof dp);
    int n = (int)s.length();
    int len=0,start=0,end=0
    int ans = LPS(s,0,n-1,len,start);
    cout<<s.substr(start,len)<<endl;
}

int32_t main(){
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}



