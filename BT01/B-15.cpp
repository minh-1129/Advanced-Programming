//Từ Fibonacci. Viết chương trình FibonacciWord.cpp in ra các từ Fibonacci từ 0 đến 10. 
//Biết rằng f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab", f(4) = "babba", tổng quát là f(n) = f(n-1) tiếp theo là f(n-2). 
//Hãy dùng phép cộng đối với string (chẳng hạn f2 = f1 + f0).
#include <iostream>
#include <string>
using namespace std;
int main(){
    string f[11];
    f[0] = "a";
    f[1] = "b";
    for(int i = 2; i <= 10; i++){
        f[i] = f[i-1] + f[i-2];
    }
    for(int i = 0; i <= 10; i++){
        cout<<f[i]<<endl;
    }
    return 0;
  
}

