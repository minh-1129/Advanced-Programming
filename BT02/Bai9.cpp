//Rectangular Game. Cho một lưới vuông hai chiều vô tận với ô ở góc trái dưới có tọa độ (1,1). Tất cả các ô ban đầu đều có giá trị bằng 0. Hãy chơi một trò chơi.
//Trò chơi gồm N bước. Mỗi bước, bạn được cho một cặp số nguyên a và b. Giá trị của mỗi ô tọa độ (u,v) thỏa mãn 1 ≤ u ≤ a và 1 ≤ v ≤ b đều được tăng thêm 1 đơn vị. 
//Sau N bước như vậy, nếu X là giá trị lớn nhất trong tất cả các ô. Bạn hãy cho biết có bao nhiêu số X trong lưới?

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a_min = INT_MAX, b_min = INT_MAX;
    int a, b;
    int queries;
    cin>>queries;
    while(queries){
        cin>>a>>b;
        a_min = min(a, a_min);
        b_min = min(b, b_min);
        --queries;
    }
    cout<<a_min * b_min;
    return 0;
}
