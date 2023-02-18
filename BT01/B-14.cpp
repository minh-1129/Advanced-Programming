//Đoán số lớn nhất. Xét trò chơi sau: Alice viết hai số nguyên trong khoảng từ 0 đến 100 vào 2 thẻ. 
//Bob được chọn xem giá trị ghi trên một trong hai thẻ. 
//Sau khi xem thẻ, Bob được chọn một trong hai thẻ. Nếu đó là thẻ có giá trị lớn hơn trong hai thẻ thì Bob thắng, nếu không thì Bob thua. 
//Hãy tìm một chiến lược chơi cho Bob và viết chương trình tương ứng để Bob chắc chắn thắng quá nửa số lần đoán.
#include <iostream>
using namespace std;
int main(){
    srand(time(0));
    int the1 = rand() % 100 + 1;
    int the2 = rand() % 100 + 1;
    cout<<"Bob chọn thẻ nào, nhập 1 hoặc 2"<<endl;
    int choice;
    cin>>choice;
    if(choice == 1){
      if(the1 > 50) cout<<"Bob chọn thẻ 1"<<endl;
      else cout<<"Bob chọn thẻ 2"<<endl;
    }
    if(choice == 2){
      if(the2 > 50) cout<<"Bob chọn thẻ 2"<<endl;
      else cout<<"Bob chọn thẻ 1"<<endl;
    }
  return 0;
      
    
}
