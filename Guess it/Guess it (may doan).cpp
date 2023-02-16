#include <iostream>

using namespace std;

void init(int &ans);
int Hint();
void Guessing(int &att, int &left, int &right);

int main(){
    int left = 1, right = 100;
    int ans;
    int att = 1;
    init(ans);
    Guessing(att, left, right);
    return 0;

}


void init(int &ans){
    cout<<"Think of a number between 1 and 100 and enter that number"<<endl;
    int tmp;
    do{

        cin>>tmp;
        if(tmp < 1 || tmp >100) cout<<"Please enter a valid number"<<endl;
    }
    while(tmp < 1 || tmp > 100);
    ans = tmp;
}
int Hint(){
    int hint;
    cout<<"Is my guess right ?"<<endl;
    cout<<"ENTER 1 if my guess is bigger than your number"<<endl;
    cout<<"ENTER 0 if my guess is correct"<<endl;
    cout<<"ENTER -1 if my guess is smaller than your number"<<endl;
    do{
        cin>>hint;
        if(hint != 0 && hint != 1 &&hint != -1) cout<<"Invalid input, try again"<<endl;
    }
    while(hint != 0 && hint != 1 &&hint != -1);

    return hint;
}
void Guessing(int &att, int &left, int &right){
    int guess = (left + right)/2;
    cout<<"Attempt "<<att<<" : My guess is "<<guess<<endl;
    int hint = Hint();
    att++;

    if(hint == 0){
        att--;
        cout<<"Hooray, after "<<att<<" attempts I have guessed your number"<<endl;
        return;
    }
    if(hint == 1) right = guess - 1;
    if(hint == -1) left = guess + 1;

    if(left > right) return;
    else if(left < 1 ||right > 100){
        cout<<"You were lying to me, I quit"<<endl;
        return;
    }
    else Guessing(att, left, right);

}
