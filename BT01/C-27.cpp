//Viết một chương trình lặp vô tận. Trong mỗi lần lặp, nó đọc vào một số nguyên N kiểu int, 
//nếu N không âm và chia hết cho 5 thì chương trình in ra thương của phép chia N cho 5, nếu không thì in ra -1. 
//Gợi ý: dùng toán tử (?:) và phép đồng dư (%) 
//Sửa chương trình để nó kết thúc khi N = -1, trước khi kết thúc cần in ra lời chào 'Bye'. 
#include <iostream>
using namespace std;
int main(){
    int n;
    do
    {
       cin>>n;
       if(n == -1){
          cout<<"Bye";
          return 0;
       }
       cout<<((n >= 0 && n % 5 ==0) ? (n%5) : -1)<<endl;
    }
    while(n != -1);
    return 0;
}
