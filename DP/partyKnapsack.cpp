//#include <bits/stdc++.h>
//using namespace std;
//typedef pair<int,int> pii;
//#define F first
//#define S second
//
//void solve(int *val,int *wt ,int W,int n){
//    int dp[101][501];
//    memset(dp,0,sizeof dp);
//    for(int i=1;i<=n;i++){
//        for(int j=0;j<=W;j++){
//            dp[i][j] = dp[i-1][j];
//            if(wt[i-1]<=j) {
//                if(dp[i][j]<val[i-1]+dp[i-1][j-wt[i-1]]){
//                    dp[i][j] =   val[i-1]+dp[i-1][j-wt[i-1]];
//                }
//            }
//        }
//    }
//    int mf = dp[n][W];
//    int mm=0;
//    for(int i=0;i<=W;i++){
//        if(mf ==dp[n][i]) {
//            mm = i;break;
//        }
//    }
//    cout<<mm<<" "<<mf<<endl;
//}
//
//int main()
//{
//    while(true){
//        int W,n;
//        cin>>W>>n;
//        if(W==0&&n==0) return 0;
//        int val[n],wt[n];
//        for(int i=0;i<n;i++){
//            cin>>wt[i]>>val[i];
//        }
//        solve(val,wt,W,n);
//    }
//    
//    return 0;
//}
//
