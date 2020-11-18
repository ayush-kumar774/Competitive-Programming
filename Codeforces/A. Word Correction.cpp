// https://codeforces.com/problemset/problem/938/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

bool isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' || ch == 'y') {
        return true ;
    }
    return false ;
}

void solve()
{
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    string ans = "" ;
    ans += s[0] ;
    for (int i = 1 ; i < n ; i++) {
        if ( isVowel(s[i]) and isVowel(s[i - 1]) ) {
            continue ;
        }
        else ans += s[i] ;
    }
    cout << ans << endl ;
}
int32_t main()
{
    fast ;
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