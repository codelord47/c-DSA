//#include <bits/stdc++.h>
//using namespace std;
//
//void printStr(vector<char> str){
//    for(int i=0;i<str.size();i++)
//        cout<<str[i];
//    cout<<endl;
//}
//
//void solve(vector<char> str,int lp,int rp,int n){
//    if(str.size()==2*n) printStr(str);
//    if(lp==rp) {
//        str.push_back('(');
//        int lpTemp=lp+1;
//        solve(str, lpTemp, rp, n);
//        str.pop_back();
//    }
//    else{
//        str.push_back('(');
//        int lpTemp=lp+1;
//        solve(str, lpTemp, rp, n);
//        str.pop_back();
//        str.push_back(')');
//        int rpTemp=rp+1;
//        solve(str, lp,rpTemp, n);
//        str.pop_back();
//    }
//}
//
//int main(){
//    int n;
//    cin>>n;
//    vector<char> str;
//    solve(str,0,0,n);
//    return 0;
//}
