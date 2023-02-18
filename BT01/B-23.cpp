//Viết một chương trình MaxWithoutIf nhập hai số nguyên và in ra số lớn hơn trong hai số đó. 
//Trong chương trình không được dùng lệnh if hay cấu trúc (a > b)? b : a;. Gợi ý: dùng hàm abs trong thư viện cstdlib.
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  int a, b;
  cin>>a>>b; //xet a, b nguyen duong
  cout<<(abs(a-b) + abs(a+b))/2;
  return 0;
}
