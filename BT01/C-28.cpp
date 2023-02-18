//Viết một chương trình dùng 01 vòng lặp và 04 điều kiện để in ra đoạn sau:
//12 midnight
// 1am
// 2am
// ...
// 12 noon
// 1pm
// ...
// 11pm

#include <iostream>
using namespace std;
int main(){
  for(int i = 0; i < 24; i++){
      if(i==0) cout<<"12 midnight"<<endl;
      else if (i < 12) cout<<i<<"am"<<endl;
      else if (i ==12) cout<<"12 noon"<<endl;
      else cout<<i-12<<"pm"<<endl;
  }
  return 0;
}
