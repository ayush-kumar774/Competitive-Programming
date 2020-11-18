// https://codeforces.com/problemset/problem/731/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
   // string abc = "abcdefghijklmnopqrstuvwxyz" ;
    string str ;
    cin >> str ;
    int noOfRotationA, noOfRotationB , ans = 0 ;
    noOfRotationA = abs('a' - str[0]) ;
    noOfRotationB = abs('z' - str[0]) + 1 ;
    ans += min(noOfRotationA, noOfRotationB) ;
    // cout << min(noOfRotationA, noOfRotationB) << endl ;
    for(int i = 1 ; i < str.size() ; i++)
    {
        noOfRotationA = abs(str[i - 1] - str [i] );
        noOfRotationB = (26 - abs( (str[i - 1] - 96) - (str[i] - 96) ) ) ;
        // cout << "Clockwise " << noOfRotationA << endl ;
        // cout << "Anti-clockwise " << noOfRotationB << endl ;
        // cout << min(noOfRotationA, noOfRotationB) << endl ;
        ans += min(noOfRotationA, noOfRotationB) ;
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
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/