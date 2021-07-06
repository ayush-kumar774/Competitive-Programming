// https://codeforces.com/problemset/problem/1353/B
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , k , sum =  0;
    cin >> n >> k ;
    int k2 = k ;
    vector<int> a (n) ;
    vector<int> b (n) ;
    for(auto & x : a ) cin >> x ;
    for(auto & x : b ) cin >> x ;
    sort(a.begin() , a.end()) ;
    sort(b.rbegin() , b.rend()) ;
    int index = n - 1 ;
    for(int i = 0 ; i < n ; i++) {
        if (i < k )
            sum += max (a[i] , b[i]) ;
        else sum += a[i] ;
    }
    cout << sum << endl ;
}

int32_t main()
{
    fast ;
    int testcases ;
    cin >> testcases ;
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