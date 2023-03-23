#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
    //giá trị của toán hạng của toán tử delete phải là một con trỏ được khởi tạo mới (new int hoặc..) nếu không sẽ xảy ra undefined behaviour
}


