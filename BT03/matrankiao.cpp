#include <iostream>
#include <iomanip>
using namespace std;
int** magicsquare (int n){
    int** res = new int*[n];
    for(int i = 0; i < n; i++){
        res[i] = new int[n];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res[i][j] = 0;
        }
    }
    int row = 0;
    int col = n/2;
    res[row][col] = 1;
    for(int i = 2; i <= n*n; i++){
        int newrow = (row + n - 1) % n;
        int newcol = (col + 1) % n;
        if(res[newrow][newcol] != 0){
            newrow = (row + 1) % n;
            newcol = col;
        }
        res[newrow][newcol] = i;
        row = newrow;
        col = newcol;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    if(n % 2 == 0) return 0;

    int** res = magicsquare(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<setw(2)<<setfill('0')<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}
