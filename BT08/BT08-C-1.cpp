#include <iostream>
using namespace std;
int strlen(char * s){
    int len = 0;
    while(s[len] != '\0'){
        len++;
    }
    return len;
}
char* Reverse(char* str){
    char* s = str;
    int len = strlen(s);

    for(int i = 0; i < len/2; i++){
        swap(s[i], s[len-1-i]);
    }
    return s;
}
void pad_right(char* s, int n){
    int len = strlen(s);
    if(len >= n) cout<<s<<endl;
    else{
        for(int i = 0; i < n - len; i++){
            s[len + i] = ' ';
        }
        s[n] = '\0';

    }
    cout<<s<<"end"<<endl;
}
void pad_left(char* s, int n){
    int len = strlen(s);
    if(len >= n) cout<<s<<endl;
    char* tmp = new char [n];
    for(int i = 0; i < n - len; i++){
        tmp[i] = ' ';
    }
    for(int i = 0; i < len; i ++){
        tmp[n - len + i] = s[i];
    }
    tmp[n] = '\0';
    s = tmp;
    cout<<s<<endl;
}
void truncate(char*s, int n){
    int len = strlen(s);
    if(len <= n) return;
    else s[n] = '\0';

}
bool ispalindrome(char* s){
    int len = strlen(s);
    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len-1-i]) return false;
    }
    return true;
}
void trim_left(char* s){
    int len = strlen(s);
    int num = 0;
    while(num < len && s[num] != ' '){
        num++;
    }

    for(int i = 0; i < len - num; i++){
        s[i] = s[i + num];
    }
    s[len - num] = '\0';
    cout<<s<<endl;

}
void trim_right(char* s){
    int len = strlen(s);
    for(int i = len - 1; i >= 0; i--){
        if(s[i] != ' ')
            s[i + 1] = '\0';
    }
}
int main(){
    //char* s; cin>>s;
    //cout<<strlen(s)<<endl;
    //cout<<Reverse(s)<<endl;
    //char* s1; cin>>s1;
    //int n; cin>>n;
    //pad_left(s1, n); cout<<endl;
    //pad_right(s1, n + 5);
    //char* s2; cin>>s2;
    //truncate(s2, 2); cout<<s2<<endl;
    //cout<<ispalindrome(s2);
    //char* s3; cin>>s3;
    //trim_left(s3);
    //trim_right(s3);
    //cout<<s3;
    return 0;




}
