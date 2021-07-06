//http://codeforces.com/problemset/problem/59/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int small = 0;
    for(auto x: s)
        if(int(x) >= 97) small++;
    (small >= s.size() - small) ? transform(s.begin(), s.end(), s.begin(), ::tolower)
    : transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s ;
}
