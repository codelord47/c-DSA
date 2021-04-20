//#include <bits/stdc++.h>
//using namespace std;
//
//
//string longestPalindrome(string s) {
//    long maxm = 1,n = s.size(),l,r,max_start_index=0;
//    for(long i=1;i<n;i++){
//        l = i-1;r=i+1;
//        while(s[l]==s[r]&&l>=0&&r<n){
//            l--;r++;
//        }
//        if((r-l-1)>maxm){
//            maxm = r-l-1;
//            max_start_index = l+1;
//        }
//    }
//    for(int i=0;i<n-1;i++){
//        if(s[i]==s[i+1]){
//            l = i-1;r=i+2;
//            while(s[l]==s[r]&&l>=0&&r<n){
//                l--;r++;
//            }
//            if((r-l-1)>maxm){
//                maxm = r-l-1;
//                max_start_index = l+1;
//            }
//        }
//    }
//    return s.substr(max_start_index,maxm);
//}
//int main(){
//    string s;
//    cin>>s;
//    cout<<longestPalindrome(s)<<endl;
//    return 0;
//}
