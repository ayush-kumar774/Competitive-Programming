// https://www.codechef.com/problems/TRISQ

// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long

void solve()
{
    int base ;
    cin >> base ;
    base -= 2 ;
    base = floor(base / 2) ;
    cout << base * (base + 1) / 2 << endl ;
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
