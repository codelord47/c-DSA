//#include <bits/stdc++.h>
//using namespace std;
//
//int * getLPS(string s){
//    long len = s.length(),i=1,j=0;
//    int * lps = new int[len];
//    lps[0] = 0;
//    while(i<len){
//        if(s[i]==s[j]){
//            lps[i] = 1+j;
//            i++;j++;
//        } else {
//            if(j!=0){
//                j = lps[j-1];
//
//            } else {
//                lps[i] = 0;
//                i++;
//            }
//        }
//    }
//    return lps;
//
//}
//
//
//bool kmpSearch(string text,string pattern){
//    long textLen = text.length();
//    long patLen = pattern.length();
//    long i=0,j=0;
//    int * lps = getLPS(pattern);
//    while(i<textLen&&j<patLen){
//        if(text[i]==pattern[j]){
//            i++;j++;
//        } else {
//            if(j!=0){
//                j = lps[j-1];
//            } else {
//                i++;
//            }
//        }
//    }
//    if(j==patLen) return true;
//    return false;
//}
//
//int main(){
//    string s,p;
//    cin>>s>>p;
//    cout<<kmpSearch(s,p)<<endl;
//    return 0;
//}
