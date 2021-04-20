//
//#include <bits/stdc++.h>
//using namespace std;
//
//int maxSumRect(int mat[][101],int n,int m){
//    int sumRect[n+1][102];
//    memset(sumRect, 0, sizeof(sumRect));
//    int maxm = INT_MIN;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            for(int k=i;k<n;k++){
//                for(int l=j;l<m;l++){
//                    sumRect[i][j]+=mat[k][l];
//                }
//            }
//            maxm = max(maxm,sumRect[i][j]);
//        }
//    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            for(int k=i;k<=n;k++){
//                for(int l=j;l<=m;l++){
//                    int temp = sumRect[i][j]+sumRect[k][l] - sumRect[i][l] - sumRect[k][j];
//                    maxm = max(maxm,temp);
//                }
//            }
//        }
//    }
//    return maxm;
//}
//
//int kadane(int sum[],int n){
//    int ans[n];ans[0]=sum[0];
//    for(int i=1;i<n;i++){
//        ans[i] = max(sum[i],sum[i]+ans[i-1]);
//    }
//    int maxm= INT_MIN;
//    for(int i=0;i<n;i++)
//        maxm = max(maxm,ans[i]);
//    return maxm;
//}
//
//int maxSumRect2(int mat[][101],int n,int m){
//    int maxm = INT_MIN;
//    int sum[n];
//    for(int l=0;l<m;l++){
//        memset(sum, 0, sizeof(sum));
//        for(int r=l;r<m;r++){
//            for(int i=0;i<n;i++){
//                sum[i]+=mat[i][r];
//            }
//            int temp_max = kadane(sum, n);
//            maxm = max(temp_max,maxm);
//        }
//    }
//
//    return maxm;
//}
//int main(){
//    int n,m;
//    cin>>n>>m;
//    int mat[n][101];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>mat[i][j];
//        }
//    }
//    cout<<maxSumRect2(mat,n,m)<<endl;
//    return 0;
//}
