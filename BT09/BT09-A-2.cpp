 #include <iostream>
 using namespace std;
 int main(){
    int* p = new int;
    int* p2 = p; //gây lỗi do sau đó p bị giải phóng
    *p = 10;
    delete p;
    *p2 = 100; //không thể gán giá trị cho p2 vì địa chỉ p2 trỏ tới đã bị giải phóng cùng p
    cout << *p2;
    delete p2; //vì con trỏ p2 không còn tồn tại
 }


