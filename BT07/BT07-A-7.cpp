#include <iostream>
#include <cstring>
using namespace std;

int dem(char* str1, char* str2){
    int cnt = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 > len2) return 0;
    for(int i = 0; i < len2; i++){
        if(str2[i] == str1[0]){
            char* tmp = new char[max(len1,len2)];
            int ind = 0;

            for(int j = i; j < i + len1 && j < len2; j++){
                tmp[ind++] = str2[j];

            }
            tmp[len1] = '\0';
            if(strcmp(tmp,str1) == 0) cnt++;
        }
    }
    return cnt;

}
int main(){
    char* str1;
    char* str2;
    cin>>str1>>str2;
    cout<<dem(str1, str2);

}
