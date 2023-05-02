#include <bits/stdc++.h>
using namespace std;

const long long p = 97;
const int mod = 1000000007;
const int maxn = 100000;



long long hash1[maxn + 1], p_pow[maxn + 1];
//hash s[0...n-1] = s[0].p ^ (n - 1) + s[1].p ^ (n - 2) + ... + s[n-1]

//hash s[i...j] = sigma s[k].p ^(j - i - (k - i)) = sigma s[k].p^(j - k) <k: i -> j> 
//= s[i].p ^(j - i) + s[i + 1].p^(j-i-1) +... + s[j]

//hash s[i...j] = hash s[0...j] - hash s[0... i -1] * p ^ (j - i + 1)
//hash s[0...j] = s[0].p^j + s[1].p^(j-1) + ... + s[i-1].p^(j - i + 1) * + s[j]
//hash s[0...i -1] = s[0].p^(i-1) + s[1].p^(i-2) +...+ s[i-1]
//hash s[0...i-1] * p^(j - i + 1) = s[0].p^j + s[1].p^(j-1) +...+ s[i - 1].p^(j - i + 1)

//hash1[i + 1] = hash s[0..i]
long long computed_hash(int i, int j) //hash s[i...j]
{
    long long tmp =(hash1[j + 1] - hash1[i] * p_pow[j - i + 1] % mod + mod) % mod;
    return tmp;
}
int main(){
    int n, m;
    cin>>n>>m;
    string str;
    cin>>str;

    p_pow[0] = 1;
    hash1[0] = 0;
    for(int i = 0; i < n; i++){
        
        p_pow[i + 1] = p_pow[i] * p % mod;
        
        hash1[i + 1] = (hash1[i] * p + (str[i] - 'a' + 1)) % mod;
    }
    int SQRTN = (int)sqrt(n); //for length > sqrt(n) use bruteforce
    vector<vector<int>> memo(n, vector<int>(SQRTN + 1, 0));
    for(int i = n - 1; i >= 0; i--)
    {
        for(int length = 1; length <= SQRTN; length++)
        {
            if(i + length <= n)
            {
                if(i + length * 2 <= n && computed_hash(i, i + length - 1) == computed_hash(i + length, i + length * 2 - 1))
                {
                    memo[i][length] = memo[i + length][length] + 1;
                }
                else{
                    memo[i][length] = 1;
                }
            }
            else{
                memo[i][length] = 0;
            }
        }
    }

    while(m--){
        int i, j;
        cin>>i>>j;
        --i; --j;
        int length = j - i + 1;
        if(length <= SQRTN){
            cout<<memo[i][length]<<endl;
        } else{
            int ans = 1;
            int ptr = j + 1;
            long long sub = computed_hash(i, j);
            while(ptr + length <= n && computed_hash(ptr, ptr + length - 1) == sub){
                ++ans;
                ptr += length;
            }
            cout<<ans<<endl;

        }

    }
    return 0;
}
