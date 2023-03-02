#include <bits/stdc++.h>
using namespace std;
void permutation(string &str, int l, int r){
    if (l == r)
        cout << str << endl;
    else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]); //tach phan tu
            permutation(str, l + 1, r);
            swap(str[l], str[i]); //quay lui
        }
    }
}
int main(){
    int n;
    cin>>n;
    string init="";
    for(int i = 0; i < n; i++){
        init += char('a'+i);
    }
    permutation(init,0,n-1);
    return 0;
}
