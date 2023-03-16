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
    Point mid_point(Point other){
        Point res;
        res.x = (this->x + other.x)/2;
        res.y = (this->y + other.y)/2;
        return res;
    }
};
int main(){
    Point p1(1,1);
    Point p2(3,3);
    p1.mid_point(p2).Print();
}
