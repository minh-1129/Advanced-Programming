#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int grid[2000][2000];
int dy[3]={0,1,-1};

void loang(int grid[2000][2000], int W, int H, int x, int y)
{
    if(x == H-1 && y < W) {
        grid[x][y] = 2;
        return;
    }
    grid[x][y] = 2;
    for(int i = 0; i < 3; i++){
        int x1 = x + 1;
        int y1 = y + dy[i];
        if(x1 >= 0 && y1 >= 0 && x1 < H && y1 < W && grid[x1][y1] == 1 && (grid[x1][y1]== 1 &&(x1==H-1||y1 == y||grid[x][y1] ==1))
        {
            
            loang(grid, W, H, x1,y1);
        }
    }
    
    
}
int main() {
    int W,H;
    cin>>W>>H;
    int x_pos, y_pos;
    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            char x; cin>>x;
            if(x == 'E') grid[i][j] = 1;
            if(x=='R') grid[i][j] = 0;
            if(x=='Y')
            {
                x_pos = i;
                y_pos = j;
                grid[i][j] = 1;
            }
        }
    }
    loang(grid, W, H, x_pos, y_pos);
  
  
        
   for(int i = 0; i < W; i++){
        if(grid[H-1][i] == 2) {
            cout<<"YES";
            return 0;
        }
   }
   cout<<"NO";
    
    
    
    
    return 0;
}
