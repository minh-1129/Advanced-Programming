#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a = 2;
    int* ptr = &a;
    delete ptr;
    cerr<<a;
    //khi giải phóng con trỏ thì giá trị biến a lưu trong địa chỉ mà con trỏ trỏ tới cũng bị xóa
}
