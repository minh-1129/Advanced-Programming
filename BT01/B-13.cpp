//Viết một chương trình distance.cpp đọc hai số nguyên x và y từ bàn phím và in ra khoảng cách từ điểm (x, y) tới gốc tọa độ (0, 0).
#include <iostream>
#include <cmath>
int main(){
  int x, y;
  std::cin >>x >>y;
  std::cout<< sqrt(1.0*x*x + 1.0*y*y);
}
