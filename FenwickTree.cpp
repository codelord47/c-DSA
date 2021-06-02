#include <bits/stdc++.h>
using namespace std;

vector<int> BIT;
vector<int> arr;
int n;

void update(int x,int val){
	for(;x<=n;x+=(x&-x))
		BIT[x] += val;
}

int query(int x){
	int sum = 0;
	for(;x>0;x-=(x&-x))
		sum += BIT[x];
	return sum;
}

int main(){
	cin >> n;
	BIT.resize(n+1,0);
	arr.resize(n+1,0);
	for(int i=1;i<=n;i++){
		cin >> arr[i];
		update(i,arr[i]);
	}
	// cout << "Sum of first 10 el " << query(10) << endl;
	// cout << "3 to 7 " <<  query(7) - query(2) << endl; 
	return 0;
}






