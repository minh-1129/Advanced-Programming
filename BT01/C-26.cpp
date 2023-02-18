//Thống kê đơn giản. Cho N số nguyên, hãy viết một chương trình BasicStatistics tính giá trị trung bình (double), giá trị lớn nhất và giá trị nhỏ nhất. 
//Chương trình cần nhập N là số các số nguyên, sau đó lần lượt nhập từng số nguyên trong N số đó.
#include <iostream>
#include <climits>
using namespace std;
int main(){
  int n; cin>>n;
  int tmp = n;
  int MAX = INT_MIN, MIN = INT_MAX;
  double MEAN = 0;
  while(tmp){
      int x; cin>>x;
      MAX = max(MAX, x);
      MIN = min(MIN, x);
      MEAN += x;
      --tmp;
  }
  MEAN /= n;
  cout<<"MEAN: "<<MEAN<<endl;
  cout<<"MAX: "<<MAX<<endl;
  cout<<"MIN: "<<MIN<<endl;
  return 0;
}
