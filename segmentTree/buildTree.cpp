//#include <bits/stdc++.h>
//using namespace std;
//
//void buildTree(int * arr,int * tree,int start,int end, int treeNode){
//    if(start == end) {
//        tree[treeNode] = arr[start];
//        return;
//    }
//    int mid = ( start + end)/2;
//    buildTree(arr, tree, start, mid, 2*treeNode);
//    buildTree(arr, tree, mid+1, end, 2*treeNode+1);
//    tree[treeNode] = tree[2*treeNode] + tree[2*treeNode+1];
//}
//
//void updateTree(int * arr, int * tree,int start,int end,int index,int value,int treeNode){
//    if(start==end) {
//        arr[index] = value;
//        tree[treeNode] = value;
//        return;
//    }
//    int mid = ( start + end )/2;
//    if(index>mid) {
//        updateTree(arr,tree,mid+1,end,index,value,2*treeNode+1);
//    } else {
//        updateTree(arr,tree,start,mid,index,value,2*treeNode);
//    }
//    tree[treeNode] = tree[2*treeNode+1] + tree[2*treeNode];
//}
//
//int queryRange(int * tree, int start,int end,int treeNode,int left,int right){
//    //completely outside the range
//    if(right<start||left>end) return 0;
//    //completely inside the range -- return this ans
//    if(left<=start&&right>=end) return tree[treeNode];
//    //partially inside partially outside
//    int mid = (start + end)/2;
//    int ans1 = queryRange(tree,start,mid,2*treeNode,left,right);
//    int ans2 = queryRange(tree,mid+1,end,2*treeNode+1,left,right);
//    return ans1 + ans2 ;
//}
//
//int main(){
//    int n = 5;
//    int arr[] = {1,2,3,4,5};
//    int * tree = new int [2*n];
//    
//    buildTree(arr,tree,0,n-1,1);
//    for(int i=1;i<2*n;i++){
//        cout<<tree[i]<<" ";
//    }
//    cout<<endl;
//    
//    updateTree(arr,tree,0,4,2,10,1);
//    for(int i=1;i<2*n;i++){
//        cout<<tree[i]<<" ";
//    }
//    cout<<endl;
//
//    int l = 2,r = 4;
//    int ans = queryRange(tree,0,n-1,1,l,r);
//    cout<<ans<<endl;
//    return 0;
//}
