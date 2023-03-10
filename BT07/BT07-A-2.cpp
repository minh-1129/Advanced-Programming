#include <iostream>
using namespace std;
void print_size(int a[], int n){
    cout<<sizeof(a)/sizeof(int);
}
int main(){
    int SIZE = 4;
    int a[SIZE];
    cout<<sizeof(a)/sizeof(int)<<endl;
    print_size(a,SIZE);
}
