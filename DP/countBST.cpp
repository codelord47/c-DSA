//
//#include <bits/stdc++.h>
//typedef long long int ll;
//using namespace std;
//const int MOD = 1e9+7;
//
//long count( int n,long dp[])
//{
//    if(n==3) return 5;
//    if(n==2) return 2;
//    if(n==1||n==0) return 1;
//    
//    if(dp[n]!=-1) return dp[n];
//    long ans=0;
//    for(int i=1;i<=n;i++){
//        long small = count(i-1,dp);
//        long big = count(n-i,dp);
//        long temp = ((small%MOD)*(big%MOD))%MOD;
//        ans = ((ans%MOD)+(temp%MOD))%MOD;
//    }
//    dp[n] = ans;
//    return ans;
//}
//
//int countBST( int n)
//{
//    long dp[n+1];
//    memset(dp,-1,sizeof dp);
//    return count(n,dp)%MOD;
//}
//
//int countBST2(int n){
//    int * c = new int [n+1];
//    c[0]=c[1]=1;
//    for(int i=2;i<=n;i++){
//        c[i]=0;
//        for(int j=0;j<i;j++){
//            long res = c[j]*1l*c[i-j-1];
//            int temp = (int)(res%MOD);
//            c[i] = (c[i]+temp)%MOD;
//        }
//    }
//    int ans = c[n]%MOD;
//    delete [] c;
//    return ans;
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    int n;
//    double timeTaken;
//    cin>>n;
//    time_t start,end;
//    time(&start);
//    cout<<countBST2(n)<<endl;
//    time(&end);
//    timeTaken = double(end-start);
//    cout<<fixed<<timeTaken<<setprecision(5)<<endl;
//    time(&start);
//    cout<<countBST(n)<<endl;
//    time(&end);
//    timeTaken = double(end-start);
//    cout<<fixed<<timeTaken<<setprecision(5)<<endl;
//    
//    return 0;
//}
//
//
//
