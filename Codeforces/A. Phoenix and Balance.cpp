// https://codeforces.com/problemset/problem/1348/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void solve()
{
    int n ;
    cin >> n ;
    if (n == 2) cout << 2 << endl ;
    else {
        int sum1 = 0 , sum2 = 0 ;
        int num = (n / 2) ;
        for(int i = 1 ; i < num ; i++ ) {
            sum1 += binpow(2, i) ;
        }
        sum1 += binpow(2, n) ;
        for(int i = num ; i < n ; i++) {
            sum2 += binpow(2, i) ;
        }
        //cout << sum1 << " " << sum2 << endl ;
        cout << abs(sum1 - sum2) << endl ;
    }
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