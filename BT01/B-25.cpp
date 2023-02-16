//Viết một chương trình nhập 5 số từ bàn phím sau đó in ra số đứng giữa (lớn hơn hai số và nhỏ hơn hai số) trong 5 số đó. 
//Chú ý sao cho chương trình không bao giờ dùng quá 6 phép so sánh.
#include <iostream>
using namespace std;
int main(){
  int test; cin>>test;
  while(test--){
    int SIZE = 5;
    int a[SIZE+1];
    a[0] = -1;
    for(int i = 1; i <= SIZE; i++){
      cin>>a[i];
    }
    if(a[1] > a[2]) swap(a[1], a[2]);
    if(a[3] > a[4]) swap(a[3], a[4]);
    if(a[1] > a[3]){
      swap(a[1], a[3]);
      swap(a[2], a[4]);
    }
    if(a[5] < a[2]) swap(a[2], a[5]);
    if(a[2] > a[3]){
      swap(a[2], a[3]);
      swap(a[4], a[5]);
    }
    if(a[5] < a[3]) cout<<a[5]<<endl;
    else cout<<a[3]<<endl;
  }
}
