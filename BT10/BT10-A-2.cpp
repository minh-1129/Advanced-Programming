#include <iostream>
using namespace std;
struct Point{
    int x, y;
    Point(int _x, int _y){
        x = _x;
        y = _y;
    }
    Point(){
        x = 0;
        y = 0;
    }
    void Print(){
        printf("(%d,%d)",x,y);
    }
};
void print1(Point input){
    cout<<input.x<<" "<<input.y<<" "<<&input<<endl;
}
void print2(Point &input){
    cout<<input.x<<" "<<input.y<<" "<<&input<<endl;
}
int main(){
    Point tmp(1,1);
    print1(tmp);
    print2(tmp);
}
