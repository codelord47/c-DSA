#include <bits/stdc++.h>
using namespace std;


int deleteInHeap(vector<int> & heap,int n){
    int i=1,j=2*i,x = heap[1];
    heap[1] = heap[n];
    n--;
    while(j<n){
        if(heap[j]<heap[j+1]) j++;
        if(heap[i]<heap[j]){
            swap(heap[i],heap[j]);
            i = j;
            j = 2*i;
        } else break;
    }
    return x;
}


void insertInHeap(vector<int> & heap,int n){
    int temp = heap[n],i = n;
    while(i>1&&temp>heap[i/2]){
        heap[i] = heap[i/2];
        i/=2;
    }
    heap[i] = temp;
}

void createHeap(vector<int> & heap,int arr[],int n){
    heap[1] = arr[0];
    for(int i=2;i<=n;i++){
        heap[i] = arr[i-1];
        insertInHeap(heap,i);
    }
}


int main(){
    vector<int> heap(1000);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    createHeap(heap,arr,n);
    for(int i=1;i<=n;i++) cout<<heap[i]<<" ";
    cout<<endl;
    return 0;
    
}
