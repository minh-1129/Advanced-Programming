#include <iostream>
#include <cstring>
using namespace std;
char* concat(const char* str1, const char* str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* s = new char[len1+len2+1];
    for(int i = 0; i < len1; i++){
        s[i] = str1[i];
    }
    for(int i = 0; i < len2; i++){
        s[len1 + i] = str2[i];
    }
    s[len1 + len2] = '\0';
    return s;

}
int main(){
    char* s1 ="hello ";
    char* s2 = "world";
    cout<<concat(s1, s2);
    return 0;
}
