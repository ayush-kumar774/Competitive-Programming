// https://codeforces.com/problemset/problem/673/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int ans = 0 , members = 0 ;
    string s ;
    while (getline(cin,s))
    {
        if (s[0] == '+') members++ ;
        else if (s[0] == '-') members-- ;
        else
        {
            auto it = find(s.begin(), s.end() , ':') ;
            it++ ;
            int lengthOfmessage = s.end() - it ;
            ans += (members * lengthOfmessage) ;
        }
    }
    cout << ans << endl ;
}

int32_t main()
{
    fast;
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