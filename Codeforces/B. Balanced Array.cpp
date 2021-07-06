// https://codeforces.com/problemset/problem/1343/B

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
    if (n % 4 != 0) cout << "NO" << endl ;
    else
    {
        cout << "YES" << endl ;
        int num = (n / 2) , even = 0, odd = 1;
        for (int i = 0 ; i < num ; i++) {
            even += 2 ;
            cout << even << " " ;
        }
        cout << 1 << " " ;
        for (int i = 1 ; i <= num - 1 ; i++ ) {
            odd += 2 ;
            if (i == (num - 1) ) continue ;
            else cout << odd << " ";
        }
        cout << odd + num << endl ;
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