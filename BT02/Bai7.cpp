//Viết chương trình DistinctNumbers với nhiệm vụ 
//đọc một chuỗi số từ input chuẩn (bàn phím) 
//kết thúc ở số âm đầu tiên, và in ra các số đó theo đúng thứ tự, 
//nhưng nếu có các số liền nhau cùng giá trị thì chỉ in ra một lần. 
//Chương trình chỉ được dùng các biến kiểu cơ bản, 
//không được dùng mảng, string, hay các cấu trúc dữ liệu khác.

#include <iostream>
using namespace std;
int main(){
    int a, b;
    while(!cin.eof()){
        cin >> a;
        if(a != b) cout<<a<<" ";
        cin>>b;
        if(b < 0) return 0;
        if(b != a) cout<<b<<" ";
    }
    return 0;
}
