//
//#include <bits/stdc++.h>
//using namespace std;
//#define ll long long int
//
//class TrieNode {
//public:
//    int wt;
//    TrieNode ** children;
//    TrieNode (){
//        children = new TrieNode*[26];
//        for(int i=0;i<26;i++){
//            children[i] = NULL;
//        }
//        wt = 0;
//    }
//};
//
//void insert(string s,TrieNode * head,int w){
//    if(s.empty()) return;
//    TrieNode * child;
//    int ind = s[0] - 'a';
//    if(head->children[ind]){
//        child = head->children[ind];
//    }else {
//        child = new TrieNode();
//        head->children[ind]= child;
//    }
//    if(head->wt<w) head->wt = w;
//    insert(s.substr(1),child,w);
//}
//
//int searchBest(string s,TrieNode * head){
//    int ans = 0;
//    TrieNode * curr = head;
//    for(int i=0;i<s.size();i++){
//        int ind = s[i] - 'a';
//        if(curr->children[ind]==NULL){
//            return -1;
//        }
//        curr = curr->children[ind];
//        ans = curr->wt;
//    }
//    return ans;
//}
//
//
//int main() {
//    int n,q,w;
//    cin>>n>>q;
//    string data;
//    TrieNode * head = new TrieNode();
//    for(int i=0;i<n;i++){
//        cin>>data>>w;
//        insert(data,head,w);
//    }
//    while(q--){
//        string q;
//        cin>>q;
//        cout<<searchBest(q, head)<<endl;
//    }
//    return 0;
//}
//
