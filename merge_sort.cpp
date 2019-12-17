#include <iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    int t1[n1],t2[n2];
    for(int i=0;i<n1;i++)
        t1[i] = arr[l+i];
    for(int i=0;i<n2;i++)
        t2[i] = arr[m+1+i];
    i=0;j=0;k=l;
    while(i<n1&&j<n2){
        if(t1[i]<=t2[j])
            arr[k] = t1[i++];
        else 
            arr[k] = t2[j++];
        k++;
    }
    while(i<n1)
        arr[k++] = t1[i++];
    while(j<n2)
        arr[k++] = t2[j++];
    
}


void  msort(int arr[],int l,int r){
    if(l<r){
        int m = l + (r-l)/2;
        msort(arr,l,m);
        msort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}


int main(){
    int arr[10] = {5,2,8,3,1,8,91,1,4,7};
    msort(arr,0,9);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    return 0;
}