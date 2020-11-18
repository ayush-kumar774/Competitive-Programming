// https://codeforces.com/problemset/problem/1380/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for (int i = 0 ; i < n ; i++) {
        cin >> v[i] ;
    }
    for(int i = 0 ; i < n - 2 ; i++) {
        if (v[i] < v[i + 1] and v[i +1] > v[i + 2]) {
            cout << "YES" << endl ;
            cout << i + 1 << " " << i + 2 << " " << i + 3 << endl ;
            return ;
        }
    }
    cout << "NO" << endl ;
}
int32_t main()
{
    fast ;
    int testcases = 1 ;
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