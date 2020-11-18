// https://codeforces.com/problemset/problem/99/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string ans = "", str ;
    string afterDecimal = "" , beforeDecimal = "" ; 
    cin >> str ;
    for(int i = 0 ; i < str.size() ; i++)
    {
        if(str[i] == '.') {
            beforeDecimal += str[i - 1] ;
            afterDecimal += str[i + 1] ;
            break ;
        }
        else {
            ans += str[i] ;
        }
    }
    if (stoi(beforeDecimal) == 9) {
        cout << "GOTO Vasilisa." << endl ;
    }
    else if (stoi(beforeDecimal) < 9 and stoi(afterDecimal) >= 5) {
        // cout << stoi(ans) + 1 << endl ;
        ans[ans.size() - 1] += 1 ;
        cout << ans << endl ;
    }
    else if (stoi(beforeDecimal) < 9 and stoi(afterDecimal) < 5) {
        cout << ans << endl ;
    }
}

int32_t main()
{
    fast;
    int testcases = 1;
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