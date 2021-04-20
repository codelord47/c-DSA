//
//#include <bits/stdc++.h>
//typedef long long int ll;
//using namespace std;
//
//int minCost(int matrix[][100],int sx,int sy,int ex,int ey,int dp[][100]){
//    if(sx==ex && sy==ey) return matrix[sx][sy];
//    if(sx>ex||sy>ey) return INT_MAX;
//    if(dp[sx][sy]>-1) return dp[sx][sy];
//    int o1 = minCost(matrix, sx+1, sy, ex, ey,dp);
//    int o2 = minCost(matrix, sx+1, sy+1, ex, ey,dp);
//    int o3 = minCost(matrix, sx, sy+1, ex, ey,dp);
//    int ans = matrix[sx][sy]+min(o1,min(o2,o3));
//    dp[sx][sy] = ans;
//    return ans;
//}
//
//int minCostI(int matrix[][100],int n,int m){
//    int dp[n][m];
//    memset(dp, 0, sizeof dp);
//    dp[n-1][m-1] = matrix[n-1][m-1];
//    for(int i=n-2;i>=0;i--){
//        dp[i][m-1] = dp[i+1][m-1] + matrix[i][m-1];
//    }
//    for(int i=m-2;i>=0;i--){
//        dp[n-1][i] = dp[n-1][i+1] + matrix[n-1][i];
//    }
//    for(int i=n-2;i>=0;i--){
//        for(int j=m-2;j>=0;j--){
//            dp[i][j] = matrix[i][j]+ min(dp[i+1][j],min(dp[i][j+1],dp[i+1][j+1]));
//        }
//    }
//    return dp[0][0];
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    
//    int n,m;
//    cin>>n>>m;
//    
//    int matrix[n][100],aux[n][100];
//    memset(aux, -1, sizeof aux);
//    for(int i=0;i<n;i++)
//        for(int j=0;j<m;j++)
//            cin>>matrix[i][j];
//    
//    cout<<minCost(matrix, 0, 0, n-1, m-1, aux);
//    cout<<minCostI(matrix,n,m)<<endl;
//    return 0;
//}
//
//
//
