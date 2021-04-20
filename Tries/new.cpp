#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<string> ans;
struct Trie{
    struct Trie *child[26];
    bool endOfWord;
};
 
struct Trie* createNode(){
    struct Trie *t=new Trie;
    t->endOfWord=false;
    for(int i=0;i<26;i++)
        t->child[i]=NULL;
    return t;
}
 
void Insert(struct Trie *root,string s){
    ll i,ind;
    struct Trie *temp=root;
    for(i=0;i<s.size();i++){
        ind = s[i]- 'a';
        if(temp->child[ind]==NULL){
            temp->child[ind]=createNode();
        }
        temp=temp->child[ind];
    }
    temp->endOfWord=true;
}
 
void DFS(struct Trie * root,string s){
    if(root->endOfWord) ans.push_back(s);
    for(int i=0;i<26;i++){
        if(root->child[i]!=NULL){
            DFS(root->child[i],s+char('a'+ i));
        }
    }
}


void Find(struct Trie *root, string s){
    struct Trie *temp=root;
    ll i;
    for(i=0;i<s.size();i++){
        if(temp->child[s[i]-'a']==NULL){
            cout<<"No suggestions"<<endl;
            Insert(root, s);
            return;
        }
        temp=temp->child[s[i]-'a'];
    }
    DFS(temp,s);
}
 
 
 
int main(){
    ll n,q;
    string s;
    cin>>n;
    struct Trie *root=createNode();
    while(n--){
        cin>>s;
        Insert(root,s);
    }
    cin>>q;
    
    while(q--){
        ans.clear();
        cin>>s;
        Find(root,s);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }
    }
    return 0;
}
