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
//void insert(trieNode * head,int n){
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
//int query(trieNode * head,int num){
//    trieNode * temp = head;
//    int ans = 0;
//    for(int i=31;i>=0;i--){
//        int b = (num>>i)&1;
//        if(b==0){
//            if(temp->right){
//                ans+=pow(2,i);
//                temp=temp->right;
//            } else {
//                temp=temp->left;
//            }
//        }else {
//            if(temp->left){
//                ans+=pow(2,i);
//                temp = temp->left;
//            }else {
//                temp=temp->right;
//            }
//        }
//    }
//    return ans;
//}
//
//int main(){
//    int n,res=INT_MIN, preXor = 0;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    trieNode * head = new trieNode;
//    for(int i=0;i<n;i++){
//        preXor = preXor^arr[i];
//        insert(head,preXor);
//        res = max(res,query(head, preXor));
//    }
//    cout<<res<<endl;
//    return 0;
//    
//}
//
