// https://codeforces.com/contest/12/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int index ;
    string a , b , ans ="" ;
    cin >> a >> b ;
    int counter = count(a.begin(), a.end(), '0') ;
    sort(a.begin(), a.end()) ;
    // cout << a << endl ;
    for(int i = 0 ; i < a.size(); i++)
    {
        if(a[i] == '0') continue ;
        else{
            ans += a[i] ;
            index = i ;
            break ;
        }
    }
    for(int i = 0 ; i < counter ; i++) ans += '0' ;
    for(int i = index + 1 ; i < a.size() ; i++) ans += a[i] ;
    // cout << ans << endl ;
    if(ans == b ) cout << "OK" << endl; 
    else cout << "WRONG_ANSWER" << endl ;
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