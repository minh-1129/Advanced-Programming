// Viết chương trình nhập một số nguyên dương N và in ra một tam giác kích thước N. Chẳng hạn với N bằng 5 thì tam giác có dạng như sau:
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// Tương tự bài trên với dạng tam giác sau (với N bằng 5):
// *****
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i = 5; i > 0; i--)
    {
        for(int j = i; j > 0; j--)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
