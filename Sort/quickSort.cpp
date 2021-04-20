//
//#include <bits/stdc++.h>
//typedef long long int ll;
//using namespace std;
//void swap(int& a,int& b){
//    int temp = a;
//    a=b;
//    b = temp;
//}
//
//int partition(int arr[],int l,int r){
//    int c=0;
//    for(int i=l+1;i<=r;i++){
//        if(arr[i]<=arr[l]) c++;
//    }
//    swap(arr[l],arr[l+c]);
//    int i=l,j=r,m = l+c;
//    while(i!=m){
//        if(arr[i]<=arr[m]) i++;
//        else if(arr[j]>arr[m]) j--;
//        else {
//            swap(arr[i],arr[j]);
//            i++;
//            j--;
//        }
//    }
//    return m;
//}
//
//
//void quickSort(int arr[],int l,int r){
//    if(l>=r) return;
//    int c = partition(arr,l,r);
//    quickSort(arr,l,c);
//    quickSort(arr, c+1, r);
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    
//    int arr[10] = {9,5,3,4,7,6,8,1,2,0};
//    quickSort(arr,0,9);
//    for(int i=0;i<10;i++)
//        cout<<" "<<arr[i];
//    cout<<endl;
//    return 0;
//}
//
//
//
