// https://codeforces.com/problemset/problem/978/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    string s ;
    int counter = 0;
    cin >> n >> s ;
    for(int i = 0 ; i < s.size(); i++)
    {
        if(s[i] == 'x' and s[i + 1] == 'x' and s[i + 2] == 'x') counter++ ;
    }
    cout << counter << endl ;
}

int32_t main()
{
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

