#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 2e5 + 5;

int arr[MAX],tree[4*MAX],lazy[4*MAX];

void updateRange(int node, int tl, int tr, int l, int r, int val){
    if(lazy[node]){ 
        tree[node] += (tr - tl + 1) * lazy[node];    // Update it
        if(tl != tr){
            lazy[node*2] += lazy[node];              // Mark child as lazy
            lazy[node*2+1] += lazy[node];            // Mark child as lazy
        }
        lazy[node] = 0;                              // Reset it
    }
    if(tl > tr || r < tl || tr < l) return;          // Current segment is not within range [l, r] 
            
    if(l <= tl && tr <= r){
        tree[node] += (tr - tl + 1) * val;           // Segment is fully within range
        if(tl != tr){
            lazy[node*2] += val;                     // Not leaf node
            lazy[node*2+1] += val;
        }
        return;
    }
    int mid = (tl + tr) / 2;
    updateRange(node*2, tl, mid, l, r, val);         // Updating left child
    updateRange(node*2 + 1, mid + 1, tr, l, r, val); // Updating right child
    tree[node] = tree[node*2] + tree[node*2+1];      // Updating root with max value 
}

int queryRange(int node, int tl, int tr, int l, int r)
{
    if(tl > tr || r < tl || tr < l) return 0;       // Out of range
    if(lazy[node] != 0){
        tree[node] += (tr - tl + 1) * lazy[node];   // Update it
        if(tl != tr){
            lazy[node*2] += lazy[node];             // Mark child as lazy
            lazy[node*2+1] += lazy[node];           // Mark child as lazy
        }
        lazy[node] = 0;                             // Reset it
    }
    if(l <= tl && tr <= r)  return tree[node];      // Current segment is totally within range [l, r]
        
    int mid = (tl + tr) / 2;
    int p1 = queryRange(node*2, tl, mid, l, r);         // Query left child
    int p2 = queryRange(node*2 + 1, mid + 1, tr, l, r); // Query right child
    return (p1 + p2);
}

int32_t main(){
    
    int n,q,a,b,x;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin >> a;
        updateRange(1,0,n-1,i,i,a);
    }
    while(q--){
        int ch;
        cin >> ch;
        if(ch == 1){
            cin >> a >> b >> x;
            updateRange(1,0,n-1,a-1,b-1,x);
        } else {
            cin >> a;
            cout << queryRange(1,0,n-1,a-1,a-1) << endl;
        }
    }
    
    
    
    
    
    return 0;
}







