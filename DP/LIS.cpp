//#include <bits/stdc++.h>
//using namespace std;
//
//int lis(int arr[],int size){
//    int * output = new int [size];
//    output[0]=1;
//    for(int i=1;i<size;i++){
//        int max=0;
//        for(int j=i-1;j>=0;j--){
//            if(arr[i]>arr[j] && output[j]>max) max = output[j];
//        }
//        output[i] = max+1;
//    }
//    int max=0;
//    for(int i=0;i<size;i++)
//        if(output[i]>max) max = output[i];
//    delete [] output;
//    return max;
//}
//
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//        cin>>arr[i];
//    cout<<lis(arr,n)<<endl;
//    return 0;
//}
//
