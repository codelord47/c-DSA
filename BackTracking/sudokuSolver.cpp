//#include <bits/stdc++.h>
//using namespace std;
//// finds next place with element 0
//bool findNextPlace(int board[][9],int& row,int& col){
//    for(row=0;row<9;row++)
//        for(col=0;col<9;col++)
//            if(board[row][col]==0) return true;
//    return false;
//}
////returns true if finds that the postition if suitable to put element num
//bool isSafe(int board[][9],int row,int col,int num){
//    for(int i=0;i<9;i++)
//        if(board[row][i]==num) return false;
//    
//    for(int i=0;i<9;i++)
//        if(board[i][col]==num) return false;
//    
//    int box_row = row/3;
//    int box_col = col/3;
//    
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++)
//            if(board[box_row*3+i][box_col*3+j]==num) return false;
//    }
//    return true;
//}
//
////solved using backtracking
//bool sudokuSolver(int board[][9]){
//    int row,col;
//    if(!findNextPlace(board,row,col)) return true;
//    for(int i=1;i<=9;i++){
//        if(isSafe(board,row,col,i)){
//            board[row][col]=i;
//            if(sudokuSolver(board))
//                return true;
//            board[row][col] = 0;
//        }
//    }
//    return false;
//}
//
//int main(){
//    clock_t start,end;
//    ios_base::sync_with_stdio(false);
//    int n = 9;
//    int board[9][9];
//    for(int i = 0; i < n ;i++){
//        for(int j = 0; j < n; j++){
//            cin >> board[i][j];
//        }
//    }
//    start = clock();
//    cout<<endl;
//    sudokuSolver(board);
//    for(int j = 0; j < n; j++){
//        cout<<"----";
//    }
//    cout<<endl;
//    for(int i = 0; i < n ;i++){
//        cout<<"| ";
//        for(int j = 0; j < n; j++){
//            cout<<board[i][j]<<" | ";
//        }
//        cout<<endl;
//        for(int j = 0; j < n; j++){
//            cout<<"----";
//        }
//        cout<<"-";
//        cout<<endl;
//    }
//    end = clock();
//    double timeTaken = double(end-start)/double(CLOCKS_PER_SEC);
//    
//    cout<<"\n\n"<<timeTaken<<" sec"<<setprecision(20)<<"\n\n\n";
//    return 0;
//}
//
//
//
//
