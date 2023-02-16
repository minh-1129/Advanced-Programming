//You are given a string, S , consisting of lowercase English letters.
//A string is beautiful with respect to S if it can be derived from  by removing exactly  characters.
//Find and print the number of different strings that are beautiful with respect to S.

#include <iostream>
#include <cstring>
using namespace std;
long long Beautiful_String (char* s){
    int len = strlen(s);
    int cnt = 0;
    int streaks = 1;
    int duplicate_streaks = 0;
    int ABA_patterns = 0;
    for(int i = 0; i < len; i++){
        if(i==0 || s[i] == s[i-1]){
            cnt++;
        }
        else
        {
            streaks ++;
            if(cnt >= 2) duplicate_streaks ++;
            cnt = 1;
        }
    }
    for(int i = 1; i + 1 < len; i++){
        if(s[i-1] == s[i + 1] && s[i]!= s[i+1]){
            ++ABA_patterns;
        }
    }
    long long res =  1ll*streaks * (streaks-1)/2 + duplicate_streaks - ABA_patterns;
    return res;
}



int main(){
    char* str;
    cin>>str;
    cout<<Beautiful_String(str);
    return 0;
}
