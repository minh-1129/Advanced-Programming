#include <iostream>
using namespace std;


void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout<<&x;
}
void g(int yval)
{
   int y;
   y = yval;
   // in địa chỉ của y tại đây
   cout<<&y;
}
int main()
{
   f(7);
   g(11);
   return 0;
}

//dia chi cua x va y la nhu nhau do ham g va ham f co cung kieu tra ve, sau khi ham g duoc goi va hoan thanh/ra khoi stack, bien dia phuong y se khong con
//dia chi bien y lai duoc su dung de luu bien dia phuong x cho ham f trong cung 1 stack
