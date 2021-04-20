#include <bits/stdc++.h>
using namespace std;

int knapsack(int *val,int *wt,int W,int n){
    int ** dp = new int * [n+1];
    for(int i=0;i<=n;i++){
        dp[i] = new int [W+1];
    }
    for(int i=0;i<=n;i++)
        dp[i][0] = 0;
    for(int i=0;i<=W;i++)
        dp[0][i] = 0;
    for(int i=1;i<=n;i++){
        for(int w=0;w<=W;w++){
            dp[i][w] = dp[i-1][w];
            if(wt[i-1]<=w) dp[i][w] = max(dp[i][w],val[i-1]+dp[i-1][w- wt[i-1]]);
        }
    }
    int ans = dp[n][W];
    for(int i=0;i<=n;i++)
        delete [] dp[i];
    delete [] dp;
    return ans;
}

// space optimized //

int knapsack2(int *val,int *wt,int W,int n){
    int ** dp = new int * [2];
    for(int i=0;i<2;i++){
        dp[i] = new int [W+1];
    }
    for(int i=0;i<=W;i++){
        dp[0][i] = 0;
    }
    int i=0;
    while(i<n){
        int j=0;
        if(i%2!=0){
            while(++j<=W){
                dp[1][j] =  dp[0][j];
                if(wt[i]<j) dp[1][j] = max(val[i]+dp[0][j-wt[i]],dp[1][j]);
            }
        }
        else {
            while(++j<=W){
                dp[0][j] =  dp[1][j];
                if(wt[i]<j) dp[0][j] = max(val[i]+dp[1][j-wt[i]],dp[0][j]);
            }
        }
        i++;
    }
    return (n%2==0)?dp[1][W]:dp[0][W];

}

int main(){
    int val[] = {5,4,8,6};
    int wt[] = {1,2,3,5};
    int W = 5;
    cout<<knapsack2(val,wt,W,4)<<endl;
}
