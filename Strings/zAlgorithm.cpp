//#include <bits/stdc++.h>
//using namespace std;
//
//void buildZ(int Z[],string str){
//    long n = str.length();
//    int l=0,r=0;
//    for(int i=1;i<n;i++){
//        l=r=i;
//        while(r<n&&str[r-l]==str[r]){
//            r++;
//        }
//        Z[i] = r-l;r--;
//    }
//}
//
//void searchPattern(string text,string pattern){
//    string str = pattern + "$" + text;
//    long n = str.length();
//    int Z[n];
//    buildZ(Z,str);
//    for(long i=pattern.size();i<n;i++){
//        if(Z[i]==pattern.length()){
//            cout<<i-pattern.length()-1<<endl;
//        }
//    }
//}
//
//int main(){
//    string t,p;
//    cin>>t>>p;
//    searchPattern(t,p);
//    return 0;
//    
//}
