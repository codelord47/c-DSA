//#include <bits/stdc++.h>
//typedef long long unsigned int ll;
//using namespace std;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i=0;i<n;i++)
//            cin>>arr[i];
//        sort(arr,arr+n);
//        int minEl = arr[0],minm=INT_MAX;
//        for(int i=0;i<5;i++){
//            int min_temp=0;
//            for(int j=1;j<n;j++){
//                int a = arr[j]-minEl+i;
//                min_temp+= a/5+a%5/2+a%5%2;
//            }
//            minm = min (min_temp,minm);
//        }
//        cout<<minm<<endl;
//    }
//    return 0;
//}
//
//
//
//
