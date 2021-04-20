#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

int power(int a,int n){
	if(a==0) return 0;
	if(n==0) return 1;
	if(n==1) return a;
	int half = power(a,n/2);
	int full  = (half*half)%MOD;
	if(n&1) return (full*a)%MOD;
	return full;
}

int32_t main(){
	int n;
	cin >> n;
	int target = (n*(n+1))/2;
	if(target%2 != 0) {
		cout << 0 << endl;
		return 0;
	}	
	target /= 2;
	
	vector< vector<int> > dp(n+1 , vector<int>(target+1,0));
	
	dp[0][0] = 1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=target;j++){
			dp[i][j] = dp[i - 1][j];
			int left = j - i;
			if(left>=0) 
				dp[i][j] = (dp[i][j] + dp[i-1][left])%MOD;
		}
	}
	cout << dp[n][target] * power(2,MOD-2)%MOD << endl;
	return 0;
}