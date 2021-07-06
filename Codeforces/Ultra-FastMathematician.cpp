//http://codeforces.com/problemset/problem/61/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int ans;
    string s1, s2 ;
    cin >> s1 >> s2 ;
    for(int i = 0; i < s1.size() ; i++)
    {
        ans = ( s1[i] - 48 ) ^ ( s2[i] - 48 ) ;
        cout << ans ;
    }
    return 0 ;
}
