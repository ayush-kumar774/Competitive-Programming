// https://www.hackerrank.com/challenges/cut-the-sticks/problem

#include <bits/stdc++.h>
using namespace std ;
// #define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , minn = 9999, sum = 0 ;
    cin >> n ;
    int v[n] ;
    for(int i = 0 ; i < n; i++)
    {
        cin >> v[i] ;
        if(v[i] < minn) minn = v[i] ;
        sum += v[i] ;
    }
    cout << n << endl ;
    sum -= (n * minn) ;
    for(int i = 0 ; i < n ; i++ ) v[i] -= minn ;
    while (sum != 0)
    {
        int cnt = 0, m = 9999 ;
        for(int i = 0 ; i < n ; i++)
        {
            if(m > v[i] and v[i] != 0) {
                m = v[i] ;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(v[i] >= m) {
                v[i] -= m ;
                cnt++ ;
            }
        }
        cout << cnt << endl ;
        sum -= (m * cnt) ;
    }
    cout << endl ;
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