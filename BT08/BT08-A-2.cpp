#include <iostream>
using namespace std;

//a
//int main( )
//{
//   char a[4] = "abc";
//   for (char *cp = a; (*cp) != '\0'; cp++) {
//      cout << (void*) cp << " : " << (*cp) << endl;
//   }
//   return 0;
//}

//b
//int main(){
//    int* a = new int[4];
//    for(int i = 0; i < 4; i++){
//        cin>>a[i];
//    }
 //   for(int i = 0; i < 4; i++){
 //       cout<<(void*) (a+i)<<" : "<<*(a+i)<<endl;
 //   }
//}

//c
//int main(){
//   double* a = new double[4];
//   for(int i = 0; i < 4; i++){
//       cin>>a[i];
//   }
//   int i = 0;
//    for(double* cp = a; i < 4; cp++, i++){
//        cout<<(void*) (cp)<<" : "<<*(cp)<<endl;
//   }
//}
//co the tinh duoc kich thuoc kieu double
//d
int main(){
   double* a = new double[4];
   for(int i = 0; i < 4; i++){
       cin>>a[i];
   }

    for(double* cp = a; *(cp)!='\0'; cp+=2){
        cout<<(void*) (cp)<<" : "<<*(cp)<<endl;


}


