//#include <bits/stdc++.h>
//using namespace std;
//
//int * getLPS(string s){
//    int len = s.length(),i=1,j=0;
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
//}
//
//
//int main(){
//    string s;
//    cin>>s;
//    int * arr = getLPS(s);
//    for(int i=0;i<s.length();i++) cout<<arr[i]<<" ";
//    cout<<endl;
//    return 0;
//}
