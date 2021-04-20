//#include <bits/stdc++.h>
//using namespace std;
//void printPath(int path[][20],int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            cout<<path[i][j]<<" ";
//    cout<<endl;
//    }
//    cout<<endl;
//    
//}
//void solve(int maze[][20],int row,int col,int n,int path[][20]){
//    if(col==n||row==n||row<0||col<0) return;
//    if(row==n-1&& col==n-1) {path[row][col]=1;printPath(path,n);}
//    path[row][col]=1;
//    if(path[row][col+1]!=1&& maze[row][col+1]!=0) solve(maze,row,col+1,n,path);
//    if(path[row+1][col]!=1&& maze[row+1][col]!=0) solve(maze,row+1,col,n,path);
//    if(path[row][col-1]!=1&& maze[row][col-1]!=0) solve(maze,row,col-1,n,path);
//    if(path[row-1][col]!=1&& maze[row-1][col]!=0) solve(maze,row-1,col,n,path);
//    path[row][col]=0;
//    
//}
//
//void ratInAMaze(int maze[][20], int n){
//    int path[20][20];
//    for(int i=0;i<n;i++)
//        for(int j=0;j<n;j++)
//            path[i][j]=0;
//    solve(maze,0,0,n,path);
//}
//
//int main(){
//    int maze[20][20] = { { 1, 1, 1, 1 },
//                        { 1, 1, 1, 1 },
//                        { 1, 1, 0, 1 },
//                        { 1, 1, 1, 1 } };
//    ratInAMaze(maze, 4);
//}
