//
//#include <bits/stdc++.h>
//typedef long long int ll;
//using namespace std;
//
//int coinChange(int n,int * d,int nD,int out[][100]){
//    if(n==0) return 1;
//    if(n<0) return 0;
//    if(nD==0) return 0;
//    if(out[n][nD]!=-1) return out[n][nD];
//    int ans = coinChange(n-d[0], d, nD, out)+coinChange(n, d+1, nD-1, out);
//    out[n][nD] = ans;
//    return ans;
//}
//
//
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n,nD;
//    cin>>n>>nD;
//    
//    int d[nD];
//    for(int i=0;i<nD;i++)
//        cin>>d[i];
//    int out[n+1][100];
//    memset(out, -1, sizeof out);
//    cout<<coinChange(n, d, nD, out)<<endl;
//    
//    return 0;
//}
//
//
//
