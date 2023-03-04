#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
bool isSafe(vector<vector<int>> board, int row, int col){
    //check column
    int n = board.size();
    for (int i = 0; i < row; ++i)
    {
        if (board[i][col] == 1) {
            return false;
        }
    }
    //check left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1) {
            return false;
        }
    }

    //check right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}


void printSol (vector<vector<int>> board){
    int n = board.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<((board[i][j] == 1) ? 'Q' : '-');
        }
        cout<<endl;
    }
    return;
}
void solve_nQueens (vector<vector<int>> board, int row){
    int n = board.size();
    if(row == n){
        cnt++;
        printSol(board);
        cout<<endl;
        return;
    }
    for(int col = 0; col < n; col++){
        if(isSafe(board,row, col)){
            board[row][col] = 1;
            solve_nQueens(board, row + 1);
            board[row][col] = 0;
        }
    }
}
int main(int argv, char** args){
    int n; cin>>n;

    //initialize an empty board
    vector<vector<int>> board;
    for(int i = 0; i < n;i ++){
        vector<int> sub;
        for(int j = 0; j < n;j ++){
            sub.push_back(0);
        }
        board.push_back(sub);
    }


    solve_nQueens(board, 0);
    if(cnt == 0){
        cout<<"there is no solution"<<endl;
    }
    return 0;
}
