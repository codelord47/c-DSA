#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
 
#define endl  "\n"
#define int   long long
#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef pair<int,int>   pii;
typedef vector<pii>     vii;
#define rep(n)          for(int i=0;i<(n);i++)
#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define sz(x)           ((int)(x).size())
#define all(x)          (x).begin(), (x).end()
#define INF             (long long) 1e18
#define MOD             1000000007
#define MAX             (int) 2e5+5


// returns index of the start of the substring
int find(string t, string p) {
    int m = (int) t.length();
    int n = (int) p.length();
    string s = p + '#' + t;
    int len = (int) s.length();
    int pi[len];
    pi[0] = 0;
    for(int i=1;i<len;i++){
    	int j = pi[i-1];
    	while(j>0 && s[i] != s[j]) j = pi[j-1];
    	if(s[i] == s[j]) j++;
    	pi[i] = j;
    	// if substring is found
    	if(pi[i] == n) return i - 2*n;
    }
    return -1;
}


int32_t main(){
    FAST
    string t, p;
    cin >> t >> p;
    
	int ans = find(t, p);

    cout << ans << endl;
    return 0;
}







