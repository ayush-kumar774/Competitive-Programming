// https://codeforces.com/problemset/problem/43/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , maxx = 0  ;
    cin >> n ;
    
    string str[n];
    string ans ;
    for(auto &x : str) cin >> x ;

    map< string , int > mp ;
    for(int i = 0; i < n ; i++)
        mp[str[i]]++ ;

    for(auto x : mp) {
        //cout << x .first << " " << x .second << endl ; 
        if(maxx < x.second) {
            maxx = x.second ;
            ans =  x.first  ;
        }
    }

    cout << ans << endl ;
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