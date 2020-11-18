//https://codeforces.com/problemset/problem/1097/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s, s1,  s2, s3, s4, s5 ;
    cin >> s ;
    cin >> s1 >> s2 >> s3 >> s4 >> s5 ;
    if(s[0] == s1[0] or s[1] == s1[1] or s[0] == s2[0] or s[1] == s2[1] or s[0] == s3[0] or s[1] == s3[1] or s[0] == s4[0] or s[1] == s4[1] or s[0] == s5[0] or s[1] == s5[1])
        cout << "YES" ;
    else
        cout << "NO" ;


}
