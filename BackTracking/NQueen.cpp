//#include <bits/stdc++.h>
//using namespace std;
//
//void printBoard(int board[][20],int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            cout<<board[i][j]<<" ";
//        cout<<endl;
//    }
//    cout<<endl;
//}
//
//bool isSafe(int board[][20],int row,int col,int n){
//    for(int i=0;i<row;i++){
//        if(board[i][col]==1) return false;
//    }
//    int i=row-1,j=col-1;
//    while(i>=0&&j>=0){
//        if(board[i][j]==1) return false;
//        i--;j--;
//    }
//    i=row-1;j=col+1;
//    while(i>=0&&j<n){
//        if(board[i][j]==1) return false;
//        i--;j++;
//    }
//    return true;
//}
//
//
//void nQueen(int board[][20],int row,int n){
//    if(row==n) printBoard(board,n);
//    
//    
//    for(int i=0;i<n;i++){
//        if(isSafe(board,row,i,n)){
//            board[row][i]=1;
//            nQueen(board,row+1,n);
//        }
//        board[row][i]=0;
//    }
//}
//int main(){
//    int n;
//    cin>>n;
//    int board[20][20];
//    memset(board, 0, sizeof board);
//    nQueen(board,0,n);
//    return 0;
//}
