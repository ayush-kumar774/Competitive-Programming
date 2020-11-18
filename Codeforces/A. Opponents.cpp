// https://codeforces.com/problemset/problem/688/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

int noOfOpponent (string s)
{
    int counter = 0 ;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == '1') counter++ ;
    }
    return counter ;
}

void solve()
{
    int n , ans = 0 , opponent = 0 ;
    cin >> opponent >> n  ;
    vector<string> v(n) ;
    for(auto &x : v) {
        cin >> x ;
    }
    int maxx = 0 ;
    for(int i = 0 ; i < n ; i++) {
        if(noOfOpponent(v[i]) < opponent ) {
            ans++ ;
        }
        else {
            maxx = max(ans, maxx) ;
            ans = 0 ;
        }
    }
    maxx = max(ans, maxx) ;
    cout << maxx << endl ;
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