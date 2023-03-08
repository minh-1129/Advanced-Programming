#include<bits/stdc++.h>
using namespace std;
void johnsontrotter(int n, int p[], int pi[], int dir[], int siz){
    if(n >= siz){
        for(int i = 0; i < siz; i++){
            cout<<p[i] + 1;
        }
        return;
    }
    johnsontrotter(n+1, p, pi, dir, siz);
    for(int i = 0; i < n; i++){
        cout<<endl;
        int tmp = p[pi[n] + dir[n]];
        p[pi[n]] = tmp;
        p[pi[n] + dir[n]] = n;
        pi[tmp] = pi[n];
        pi[n] = pi[n] + dir[n];

        johnsontrotter(n+1, p, pi, dir, siz);
    }
    dir[n] *= -1;

}
int main(){
    int n ; cin>>n;
    int p[n];
    int dir[n];
    int pi[n];

    for(int i = 0; i < n; i++){
        p[i] = i;
        pi[i] = i;
        dir[i] = -1;
    }
    johnsontrotter(0, p, pi, dir, n);
    cout<<endl;
}
