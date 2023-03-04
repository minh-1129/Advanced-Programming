#include <bits/stdc++.h>
using namespace std;
vector <int> res;


void print() {
    for(auto it = res.begin(); it != res.end(); it++)
        cout << *it << " ";
    cout << endl;
}
void Partition(int n, int lim) {
    if(n == 0) {
        print();
        return;
    }
    if(lim > n) lim = n;
    for(int i = lim; i > 0; i--) {
        int tmp = n ;
        res.push_back(i);
        tmp -= i;
        Partition(tmp, i);
        res.pop_back();
    }
}

int main() {
    int n;
    cin >> n;
    Partition(n, n);
}
