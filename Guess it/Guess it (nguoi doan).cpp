#include <bits/stdc++.h>
using namespace std;

int generateRandom();
void Play(int &guess);
void Hint(int guess, int num);

int main(){
    bool play = true;
    while(play){
        int guess;
        int ans = generateRandom();
        do{
            Play(guess);
            Hint(guess, ans);
        }
        while(guess != ans);
        cout<<"Do you want to continue ?"<<endl;
        cout<<"Enter 1 if YES or 0 if NO"<<endl;
        bool tmp; cin>>tmp;
        play = tmp;
    }
    return 0;
}


int generateRandom(){
    srand(time(0));
    return rand()%100 + 1;
}
void Play(int &guess){
    cout<<"Enter your guess(1-100)"<<endl;
    int tmp; cin>>tmp;
    guess = tmp;
}
void Hint(int guess, int num){
    if(guess > num){
        cout<<"Your guess is too big, try again"<<endl;
    }
    if(guess < num){
        cout<<"Your guess is too small, try again"<<endl;
    }
    if(guess == num){
        cout<<"Congratulations, you are right"<<endl;
    }
    return;
}
