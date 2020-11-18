//https://codeforces.com/problemset/problem/520/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti string
#define akri long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    akri number;
    cin >> number;
    aakriti s ;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> S;
    for(int i = 0; i < s.size(); i++)
        S.insert(s[i]);
    if(S.size() == 26)
        cout << "YES" << endl ;
    else
        cout << "NO" << endl;
}
