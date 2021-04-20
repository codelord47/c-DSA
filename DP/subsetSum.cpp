//#include <bits/stdc++.h>
//using namespace std;
//
//void subsetSum(int val[],int n, int sum){
//    bool dp[n+1][sum+1];
//    for(int i=0;i<=sum;i++)
//        dp[0][i] = false;
//    for(int i=0;i<=n;i++)
//        dp[i][0] = true;
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=sum;j++){
//            dp[i][j] = dp[i-1][j];
//            if(j>=val[i-1])
//                dp[i][j] = dp[i][j]|dp[i-1][j-val[i-1]];
//        }
//    }
//    if(dp[n][sum]==true) cout<<"Yes"<<endl;
//    else cout<<"No"<<endl;
//}
//
//bool subsetSumSO(int val[],int n, int sum){
//    bool dp[2][sum+1];
//    for(int i=1;i<=sum;i++)
//        dp[0][i] =false;
//    dp[0][0] =dp[1][0] = true;
//    
//    int row = 1 ;
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=sum;j++){
//            dp[row][j] = dp[row^1][j];
//            if(j>=val[i-1]) dp[row][j] = dp[row][j]||dp[row^1][j-val[i-1]];
//        }
//        row = row^1;
//    }
//    return dp[row^1][sum];
//}
//
//
//int main()
//{
//    int n,k;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//        cin>>arr[i];
//    cin>>k;
//    cout<<subsetSumSO(arr,n,k)<<endl;
//    return 0;
//}
//
