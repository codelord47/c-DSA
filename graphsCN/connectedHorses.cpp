//#include<bits/stdc++.h>
//using namespace std;
//const int MOD = 1000000007;
//
//int DFSUtil(int board[][1001],int visited[][1001],int i,int j,int n,int m){
//    if(i<0||i>=n||j<0||j>=m) return 0;
//    if(board[i][j]==0) return 0;
//    if(visited[i][j]) return 0;
//    visited[i][j] = 1;
//    int x[] = {1,-1, 1,-1,2,-2, 2,-2};
//    int y[] = {2, 2,-2,-2,1, 1,-1,-1};
//    int a=0;
//    for(int k=0;k<8;k++){
//        a+=DFSUtil(board,visited,i+x[k],j+y[k],n,m);
//    }
//    return a+1;
//}
//
//long long fact(long long n){
//    if(n==0) return 1;
//    long long res=1;
//    for(int i=2;i<=n;i++){
//        res = ((res%MOD)*i)%MOD;
//    }
//    return res;
//}
//
//long long  DFS(int board[][1001],int visited[][1001],int n,int m){
//    long long res=1;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(!visited[i][j]){
//                int a = DFSUtil(board,visited,i,j,n,m);
//                 res = ((res%MOD)*(fact(a)%MOD))%MOD;
//                
//            }
//        }
//    }
//    return res;
//}
//
//
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m,q,x,y;
//        cin>>n>>m>>q;
//        int board[n][1001],visited[n][1001];
//        for(int i=0;i<n;i++){
//            for(int j=0;j<m;j++){
//                visited[i][j] = 0;
//                board[i][j] = 0;
//            }
//        }
//        for(int i=0;i<q;i++){
//            cin>>x>>y;
//            board[x-1][y-1]=1;
//        }
//        long long ans = DFS(board,visited,n,m);
//        cout<<ans%MOD<<endl;
//    }
//    return 0;
//}
//
