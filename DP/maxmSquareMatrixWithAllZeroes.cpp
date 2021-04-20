//#include <bits/stdc++.h>
//using namespace std;
//int max(int a,int b){
//    return (a>b)?a:b;
//}
//int min(int a,int b){
//    return (a<b)?a:b;
//}
//
//int findMaxSquareWithAllZeros(int** arr, int r, int c){
//    int maxm=0;
//    int dp[r][c];
//    for(int i=0;i<c;i++){
//        dp[0][i] = arr[0][i]^1;
//        if(dp[0][i] == 1) maxm=1;
//    }
//    for(int i=1;i<r;i++){
//        dp[i][0] = arr[i][0]^1;
//        if(dp[i][0] == 1) maxm=1;
//    }
//    for(int i=1;i<r;i++){
//        for(int j=1;j<c;j++){
//            if(arr[i][j]==1) dp[i][j]=0;
//            else dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
//            if(maxm<dp[i][j]) maxm = dp[i][j];
//        }
//    }
//
//    return maxm;
//
//}
//
//int main()
// {
//  int **arr,n,m,i,j;
//  cin>>n>>m;
//  arr=new int*[n];
//  for(i=0;i<n;i++)
//      {
//       arr[i]=new int[m];
//      }
//  for(i=0;i<n;i++)
//     {
//      for(j=0;j<m;j++)
//        {
//         cin>>arr[i][j];
//        }
//     }
//  cout << findMaxSquareWithAllZeros(arr,n,m) << endl;
//  delete arr;
//  return 0;
//}
