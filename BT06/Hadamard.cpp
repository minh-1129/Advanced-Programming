#include <bits/stdc++.h>
using namespace std;
bool** Hadamard(int n){
    if(n == 2){
        bool** res = new bool*[n];
        for(int i = 0; i < n; ++i){
            res[i] = new bool[n];
        }
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                res[i][j] = 1;
            }
        }
        res[1][1] = 0;
        return res;
    }
    bool** res = new bool*[n];
    for(int i = 0; i < n; ++i){
        res[i] = new bool[n];
    }
    bool** tmp = Hadamard(n/2);
    int size = n/2;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            res[i][j] = tmp[i][j];
            res[i + size][j] = tmp[i][j];
            res[i][j + size] = tmp[i][j];
            res[i + size][j + size] = !tmp[i][j];
        }
    }
    return res;
}
int main(){
    int n; cin>>n;
    int num = pow(2,n);
    bool** check = Hadamard(num);
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            if(check[i][j]) cout<<".";
            else cout<<"o";
        }
        cout<<endl;
    }
    return 0;
}
