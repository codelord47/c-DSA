//#include <bits/stdc++.h>
//using namespace std;
//class trieNode{
//public:
//    trieNode * left,*right;
//    trieNode() {
//        left = right = NULL;
//    }
//};
//
//void insert(int n,trieNode * head){
//    trieNode * curr = head;
//    for(int i=31;i>=0;i--){
//        int d = (n>>i)&1;
//        if(d==0){
//            if(curr->left==NULL){
//                curr->left = new trieNode;
//            }
//            curr= curr->left;
//        }else {
//            if(curr->right==NULL){
//                curr->right = new trieNode;
//            }
//            curr=curr->right;
//        }
//    }
//}
//
//int findMaxPair(trieNode * head,int * arr,int n){
//    int maxXor  = INT_MIN;
//    
//    for(int i=0;i<n;i++){
//        trieNode * curr  = head;
//        int currXor = 0;
//        for(int j=31;j>=0;j--){
//            int b = (arr[i]>>j)&1;
//            if(b==0){
//                if(curr->right){
//                    currXor+= pow(2,j);
//                    curr = curr->right;
//                }else {
//                    curr= curr->left;
//                }
//            }else {
//                if(curr->left){
//                    currXor+= pow(2,j);
//                    curr = curr->left;
//                }else {
//                    curr= curr->right;
//                }
//            }
//        }
//        maxXor = max(currXor,maxXor);
//    }
//    return maxXor;
//}
//
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    trieNode * head = new trieNode;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//        insert(arr[i], head);
//    }
//    cout<<findMaxPair(head, arr, n)<<endl;
//    return 0;
//}
