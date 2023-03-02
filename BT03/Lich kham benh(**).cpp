#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sort(a, a+n);
    int tong = 0;
    for(int i = 0; i < n; i++){
        tong += a[i]*(n-1-i);
    }
    cout<<tong;
    return 0;
}
