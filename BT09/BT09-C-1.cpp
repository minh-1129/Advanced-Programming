#include <iostream>
#include <cstring>
using namespace std;
int strlen(char * s){
    int len = 0;
    while(s[len] != '\0'){
        len++;
    }
    return len;
}
char* Reverse(char* str){
    char* s = new char;
    strcpy(s, str);
    int len = strlen(s);

    for(int i = 0; i < len/2; i++){
        swap(s[i], s[len-1-i]);
    }
    return s;
}
char* pad_right(char* s, int n){
    int len = strlen(s);
    char* res = new char;
    strcpy(res, s);
    if(len >= n) return res;
    else{
        for(int i = 0; i < n - len; i++){
            res[len + i] = ' ';
        }
        res[n] = '\0';

    }
    return res;

}
char* pad_left(char* s, int n){
    int len = strlen(s);
    char* tmp = new char;
    strcpy(tmp, s);
    if(len >= n) return tmp;

    for(int i = 0; i < n - len; i++){
        tmp[i] = ' ';
    }
    for(int i = 0; i < len; i ++){
        tmp[n - len + i] = s[i];
    }
    tmp[n] = '\0';
    return tmp;
}
char* truncate(char*s, int n){
    int len = strlen(s);
    char* res = new char;
    strcpy(res, s);
    if(len <= n) return res;
    else res[n] = '\0';
    return res;

}
bool ispalindrome(char* s){
    int len = strlen(s);
    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len-1-i]) return false;
    }
    return true;
}
char* trim_left(char* s){
    int len = strlen(s);
    char* res = new char;
    strcpy(res, s);
    int num = 0;
    while(num < len && s[num] != ' '){
        num++;
    }

    for(int i = 0; i < len - num; i++){
        res[i] = res[i + num];
    }
    res[len - num] = '\0';
    return res;

}
char* trim_right(char* s){
    int len = strlen(s);
    char* res = new char[len];
    strcpy(res, s);

    for(int i = len - 1; i >= 0; i--){
        if(res[i] != ' '){
            res[i + 1] = '\0';
            return res;
        }
    }

}
int main(){
    char* res = Reverse("hello");
    cout<<strlen("hello")<<endl;
    cout<<Reverse("hello")<<endl;
    cout<<pad_right("hello", 10)<<"end"<<endl;
    cout<<pad_left("hello", 5)<<endl;
    cout<<truncate("hello", 3)<<endl;
    cout<<trim_left("    hello")<<endl;
    cout<<trim_right("hello         ")<<endl;

    return 0;
}
