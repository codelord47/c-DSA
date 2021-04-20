//
//#include <bits/stdc++.h>
//typedef long long int ll;
//using namespace std;
//
//void merge(int arr[],int l,int m,int r){
//    int i,j,k;
//    int n1 = m-l+1;
//    int n2 = r-m;
//    int L[n1],R[n2];
//    for( i=0;i<n1;i++)
//        L[i] = arr[l+i];
//    for( i=0;i<n2;i++)
//        R[i] = arr[m+1+i];
//    i=0;j=0;k=l;
//    
//    while(i<n1&&j<n2){
//        if(L[i]<=R[j])
//            arr[k++] = L[i++];
//        else
//            arr[k++] = R[j++];
//    }
//    
//    while(i<n1){
//        arr[k++] = L[i++];
//    }
//    
//    while(j<n2){
//        arr[k++] = R[j++];
//    }
//}
//
//
//
//void mergeSort(int arr[],int l,int r){
//    if(l>=r) return;
//    int mid = (l+r)/2;
//    mergeSort(arr,l,mid);
//    mergeSort(arr,mid+1,r);
//    merge(arr,l,mid,r);
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
