//#include <bits/stdc++.h>
//using namespace std;
//
//int LCS(char *s1,char *s2){
//    if(s1[0]=='\0'||s2[0]=='\0') return 0;
//    if(s1[0]==s2[0]) return 1 + LCS(s1+1,s2+1);
//    
//    int op1 = LCS(s1+1,s2);
//    int op2 = LCS(s1,s2+1);
//    return max(op1,op2);
//    
//}
//
//int LCS2Helper(char* s1,char* s2,int n,int m,int dp[][100]){
//    if(n==0||m==0) return 0;
//    if(dp[n][m]!=-1) return dp[n][m];
//    int ans=0;
//    if(s1[0]==s2[0]) {
//        ans = 1+LCS2Helper(s1+1, s2+1, n-1, m-1, dp);
//    } else {
//        ans = max(LCS2Helper(s1+1, s2, n-1, m, dp),LCS2Helper(s1, s2+1, n, m-1, dp));
//    }
//    dp[n][m] = ans;
//    return ans;
//        
//}
//
//int LCS2(char* s1,char* s2){
//    int n = strlen(s1);
//    int m = strlen(s2);
//    int dp[n+1][100];
//    memset(dp,-1,sizeof dp);
//    return LCS2Helper(s1,s2,n,m,dp);
//}
//
//int LCSIterative(char* s1,char* s2){
//    int n = strlen(s1);
//    int m = strlen(s2);
//    int dp [n+1][m+1];
//    for(int i=0;i<=n;i++){
//        dp[i][0] = 0;
//    }
//    for(int i=0;i<=m;i++){
//        dp[0][i] = 0;
//    }
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++){
//            if(s1[n-i]==s2[m-j]) dp[i][j] = 1 + dp[i-1][j-1];
//            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//        }
//    }
//    return dp[n][m];
//}
//
//
//int main(){
//    char s1[100]  = "abejfnabejfnaabejfnabejfnaabejfnabejfna";
//    char s2[100] = "abdejnabdejnabdabejfnabejfnaabejfnabejfna";
//    cout<<LCSIterative(s1, s2)<<endl;
//    cout<<LCS2(s1, s2)<<endl;
//    cout<<LCS(s1,s2)<<endl;
//    return 0;
//}
