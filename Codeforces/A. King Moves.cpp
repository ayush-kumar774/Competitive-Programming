// https://codeforces.com/problemset/problem/710/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string s ;
    cin >> s ;
    if(s == "a8" or s == "h8" or s == "a1" or s == "h1") cout << 3 << endl ;
    else if (s[0] == 'a' and s[1] >= 50 and s[1] <= 55) cout << 5 << endl ;
    else if (s[0] == 'h' and s[1] >= 50 and s[1] <= 55) cout << 5 << endl ;
    else if (s[1] == '8' or s[1] == '1') {
        if(s != "a8" and s != "h8" and s != "a1" and s != "h1") cout << 5 << endl ;
    }
    else cout << 8 << endl ;
}

int32_t main()
{
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/