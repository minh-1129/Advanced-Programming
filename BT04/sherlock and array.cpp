#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int n){
    if(n==1) return true;
    if(n==2) return false;
    int left = 0, right = 0;
    for(int i = 0; i < n; i++){
        left += a[i];
    }
    int t = n-2;
    left -= a[n-1];
    while(t >=0 && left != right){
        left -= a[t];
        right += a[t+1];
        t--;
    }
    if(left != right) return false;
    else return true;

}
void solve(){
    int n; cin>>n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout<<(check(a,n)?"YES":"NO")<<endl;




}
int main(){
    int test; cin>>test;
    while(test){
        solve();
        --test;
    }
    return 0;
}
