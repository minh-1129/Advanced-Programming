#include <bits/stdc++.h>
using namespace std;
const unsigned long long p1 = 1209328303;
const long long p2 = 31;
const int mod = 1e9 + 9;
const int maxn = 100000;
string str;
//string hashing
unsigned long long hash1[maxn + 1], p_pow1[maxn + 1];
long long hash2[maxn + 1], p_pow2[maxn + 1];
//hash s[i..j] = hash s[0..j] - hash s[0....i-1]
pair<unsigned long long, long long> computed_hash(int i, int j){
    unsigned long long tmp1 = hash1[j + 1] - hash1[i] * p_pow1[j - i + 1];
    long long tmp2 =(hash2[j + 1] - hash2[i] * p_pow2[j - i + 1] % mod + mod) % mod;
    return make_pair(tmp1, tmp2);
}
int main(){
    int n, m;
    cin>>n>>m;
    cin>>str;

    p_pow1[0] = p_pow2[0] = 1;
    hash1[0] = hash2[0] = 0;
    for(int i = 0; i < n; i++){
        p_pow1[i + 1] = p_pow1[i] * p1;
        p_pow2[i + 1] = p_pow2[i] * p2;
        hash1[i + 1] = hash1[i] * p1 + str[i];
        hash2[i + 1] = (hash2[i] * p2 + (str[i] - 'a' + 1)) % mod;
    }
    int SQRTN = sqrt(n); //for length > sqrt(n) use bruteforce
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
            pair<unsigned long long, long long> sub = computed_hash(i, j);
            while(ptr + length <= n && computed_hash(ptr, ptr + length - 1) == sub){
                ++ans;
                ptr += length;
            }
            cout<<ans<<endl;

        }

    }
    return 0;
}
