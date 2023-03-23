#include <iostream>
using namespace std;
//void swap_pointers(char* x, char* y)
//{
//  char *tmp;
//   tmp = x;
//   x = y;
//   y = tmp;
//}
//int main()
//{
//   char a[] = "I should print second";
//   char b[] = "I should print first";

//   char *s1 = a;
//   char *s2 = b;
//   swap_pointers(s1,s2);
//   cout << "s1 is " << s1 << endl;
//   cout << "s2 is " << s2 << endl;
//   return 0;
//}
//loi do kieu char* tro toi phan tu dau tien trong mang char nen khong the trao doi truc tiep 2 bien kieu char*
//can truyen con tro tro toi con tro hay tham chieu den vi tri 2 con tro

void swap_pointers(char* & x, char* &y)
{
   char *tmp;
   tmp = x;
   x = y;
   y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char* s1 = a;
   char* s2 = b;
   swap_pointers(s1,s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}
