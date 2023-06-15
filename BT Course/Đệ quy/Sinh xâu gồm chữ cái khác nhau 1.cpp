#include <bits/stdc++.h>
using namespace std;
map<int, bool> used;
void gen(int N, int K, string pre){
    if((int)pre.size() == K){
        cout<<pre<<endl;
        return;
    }
    for(int i = 0; i < N; i++){
        if(used[i] == false){
            string newpre = pre + char('a' + i);
            used[i] = true;        
            gen(N, K, newpre);
            used[i] = false;
        }
    }
}
int main(){
   int N, K; cin>>N>>K;
   gen(N, K, "");
   return 0;
}
