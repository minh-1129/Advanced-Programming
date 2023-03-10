#include <iostream>
using namespace std;
int binarysearch(int *a, int left, int right, int x){
    int mid = (left + right)/2;
    if(*(a+mid) > x) return binarysearch(a,left,mid-1,x);
    else if(*(a+mid) < x) return binarysearch(a,mid + 1, right, x);
    else return mid;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int x; cin>>x;
    cout<<binarysearch(a,0,n-1,x);

}
