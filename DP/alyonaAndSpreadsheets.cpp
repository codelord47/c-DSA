//#include <bits/stdc++.h>
//using namespace std;
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    int n,m,k,l,r;
//    cin>>n>>m;
//    int arr[n][m],dp[n][m],ans[n];
//   // memset(ans,INT_MAX,sizeof ans);
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//        }
//    }
//    for(int i=0;i<m;i++)
//        dp[0][i] = 0;
//    
//    for(int i=0;i<m;i++){
//        for(int j=1;j<n;j++){
//            if(arr[j][i]>=arr[j-1][i]) dp[j][i] = dp[j-1][i];
//            else  dp[j][i] = j;
//        }
//    }
//    for(int i=0;i<n;i++){
//        ans[i]=INT_MAX;
//        for(int j=0;j<m;j++){
//            ans[i] = min (ans[i],dp[i][j]);
//        }
//    }
//    // for(int i=0;i<n;i++){
//    //     for(int j=0;j<m;j++){
//    //         cout<<dp[i][j]<<" ";
//    //     }
//    //     cout<<endl;
//    // }
//    
//    cin>>k;
//    for(int i=0;i<k;i++){
//        cin>>l>>r;
//        l--;r--;
//        if(ans[r]<=l) cout<<"Yes"<<endl;
//        else cout<<"No"<<endl;
//    }
//    
//     return 0;
//}
