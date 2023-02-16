#include <bits/stdc++.h>
using namespace std;
string mot[] = { "", "one", "two", "three", "four","five", "six", "seven", "eight",
                 "nine", "ten", "eleven", "twelve",
                 "thirteen", "fourteen", "fifteen",
                 "sixteen", "seventeen", "eighteen",
                 "nineteen" };
string hai[] = { "", "", "twenty", "thirty", "forty",
                 "fifty", "sixty", "seventy", "eighty",
                 "ninety" };

string toword (long long num, string hang){
        string res="";
        long long tmp = num - (num/100)*100;
        if(num >= 100){
            res += mot[num/100] + " hundred";
            if(num % 100 != 0) res += " ";
        }


        if(tmp > 19){
            res += hai[tmp / 10] + "-" + mot[tmp % 10];
        }
        else{
            res += mot[tmp];
        }
        if(res.size() > 0) res += hang;
        return res;
    }

string num_to_word(long long num){
        string res= "";
        res += toword(num/1000000, " million ");
        res += toword((num/1000) % 1000, " thousand ");
        res += toword(num % 1000, "");
        return res;

    }
int main(){
    string inp; cin>>inp;
    string res1 ="";
    long long num;
    if(inp[0] == '-'){
        res1 += "negative ";
        inp.erase(0,1);
        num = stoll(inp);
    }
    else num = stoll(inp);

    res1 += num_to_word(num);
    cout<<res1;
    return 0;



}
