//#include <bits/stdc++.h>
//using namespace std;
//#define ll long long int
//
//struct Node{
//    ll lC,rC;
//    Node *right, *left;
//};
//
//Node *getNode(){
//    Node *temp = (Node*)malloc(sizeof(Node));
//    temp->lC = temp->rC = 0;
//    temp->left = temp->right = NULL;
//    return temp;
//}
//
//Node* insert(Node *root, ll n, ll level){
//    if(level == -1){return root;}
//    int d = (n>>level)&1;
//    if(d){
//        root->rC += 1;
//        if(!root->right){
//            root->right = getNode();
//        }
//        root->right = insert(root->right, n, level-1);
//    }
//    else{
//        root->lC += 1;
//        if(!root->left){
//            root->left = getNode();
//        }
//        root->left = insert(root->left, n, level-1);
//    }
//    
//    return root;
//}
//
//ll query(Node *root, ll n, ll level, ll k){
//    if(root ==NULL || level == -1)
//        return 0;
//    
//    int  p = ((n>>level)&1);
//    int  q = ((k>>level)&1);
//    
//    if(q==1){
//        // if ith bit is 1  in k
//        if(p==0){
//            // if ith bit is not 1 in n  we can take all leafs of left because those will be smaller than k and find the right ones by calling
//            return root->lC+query(root->right, n, level-1, k);
//        } else {
//            // if ith bit is 1 in n we can take all leafs of right because those will make the number less than k and then find the left ones by calling
//            return root->rC+query(root->left, n, level-1, k);
//        }
//    }
//    else{
//        if(p==0){
//            // if ith bit is not set in k
//            // we need to avoid all leafs with make q^p==1
//            return query(root->left,n,level-1,k);
//        } else {
//            return query(root->right,n,level-1,k);
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    
//    ll t, n, k, temp, ans, prefix_xor;
//    cin>>t;
//    while(t--){
//        ans = temp = prefix_xor = 0;
//        cin>>n>>k;
//        Node *root = getNode();
//        insert(root, prefix_xor, 31);
//        for(ll i = 0; i < n; i++){
//            cin>>temp;
//            prefix_xor ^= temp;
//            ans += query(root,prefix_xor , 31, k);
//            insert(root, prefix_xor, 31);
//        }
//        cout<<ans<<endl;
//    }
//    return 0;
//}
//
