#include <bits/stdc++.h>
using namespace std;
map<string,bool> mp;
string rever(string s){
    reverse(s.begin(), s.end());
    return s;
}
int main(){
    int n; cin>>n;
    string pass[n];
    string rev_pass[n];
    for(int i =0; i <n;i++){
        cin>>pass[i];
        rev_pass[i] = rever(pass[i]);
        mp[rev_pass[i]] = true;

    }
    for(int i = 0; i < n; i++){
        if(mp[pass[i]]) {
            int len = pass[i].size();
            cout<<len<<" "<<pass[i][len/2];
            return 0;
        }
    }
    return 0;
}
