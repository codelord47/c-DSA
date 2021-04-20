//
//#include <bits/stdc++.h>
//using namespace std;
//
//int countPalindromeSubstrings(char s[]) {
//    long n = strlen(s),l,r;
//    int count = 0;
//    // odd len
//    for(int i=0;i<n;i++){
//        l=i;r=i;
//        while(l>=0&&r<n&&s[l]==s[r]){
//            count++;
//            l--;r++;
//        }
//    }
//    // even length
//    for(int i=0;i<n-1;i++){
//        if(s[i]==s[i+1]){
//            l= i;
//            r=i+1;
//            while(l>=0&&r<n&&s[l]==s[r]){
//                count++;
//                l--;r++;
//            }
//        }
//    }
//    return count;
//    
//}
//
//
//int main(){
//    // query comes here
//}
