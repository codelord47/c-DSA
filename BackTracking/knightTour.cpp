//#include <bits/stdc++.h>
//using namespace std;
//const int n = 8;
//void printBoard(int chessBoard[][n]){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(chessBoard[i][j]/10==0)
//                cout<<chessBoard[i][j]<<"  ";
//            else
//                cout<<chessBoard[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//}
//
//bool isSafe(int chessBoard[][n],int x,int y){
//    return ((x>=0)&&(x<n)&&(y>=0)&&(y<n)&&chessBoard[x][y]==-1);
//}
//
//bool solveChessBoard(int row,int col,int path_no,int chessBoard[][n],int xMove[],int yMove[])
//{
//    int nextx,nexty;
//    if(path_no==n*n) return 1;
//    
//    for(int i=0;i<n;i++){
//        nextx = row+xMove[i];
//        nexty = col+yMove[i];
//        if(isSafe(chessBoard,nextx,nexty)){
//            chessBoard[nextx][nexty] = path_no;
//            if(solveChessBoard(nextx, nexty, path_no+1, chessBoard, xMove, yMove))
//                return true;
//            chessBoard[nextx][nexty] = -1;
//        }
//    }
//    return false;
//}
//void solveKT(){
//    int chessBoard[n][n];
//    memset(chessBoard, -1, sizeof(chessBoard));
//    int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
//    int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
//    chessBoard[0][0] =0;
//    if(solveChessBoard(0,0,1,chessBoard,xMove,yMove)){
//        printBoard(chessBoard);
//    }
//    else cout<<"No Solution";
//    return ;
//}
//
//int main(){
//    solveKT();
//    return 0;
//}
