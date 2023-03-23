#include <iostream>
using namespace std;
int main()  {
   char **s;
   char foo[] = "Hello World";
   *s = foo;
   printf("s is %s\n", *s); //s sua thanh *s do s la kieu char**, can phai truyen kieu char*
   s[0] = foo;
   printf("s[0] is %s\n",s[0]);
   return(0);
}

