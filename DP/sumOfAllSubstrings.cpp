//
//#include <bits/stdc++.h>
//typedef long long int ll;
//using namespace std;
//#define MOD 1000000007
//
//long substrings(string s) {
//    ll totalSum=s[0]-'0';
//    ll lastValue = s[0]-'0';
//    for(int i=1;i<s.length();i++){
//        lastValue = lastValue*10+(s[i]-'0')*(i+1);
//        lastValue = lastValue%MOD;
//        totalSum = (totalSum+lastValue)%MOD;
//    }
//    return totalSum;
//}
//
//int main(){
//    string n;
//    getline(cin, n);
//    long result = substrings(n);
//    cout << result << "\n";
//    return 0;
//}
