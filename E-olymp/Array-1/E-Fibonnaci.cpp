// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

void solve()
{
    int n ;
    cin >> n ;
    int fib[n + 1] = {0} ;
    fib[0] = 0 , fib[1] = 1 ;
    for(int i = 2 ; i <= n + 1 ; i++)
    {
        fib[i] = fib[i- 1] + fib[i - 2] ;
    }
    cout << fib[n + 1 ] << endl ;
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
    return 0 ;
}
