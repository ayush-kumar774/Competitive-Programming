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
    int a , b , c ;
    cin >> a >> b >> c ;
    
    if (a < c) cout << 1 << " " ;
    else cout << -1 << " " ;

    if (c < a * b ) cout << b << " ";
    else cout << -1 << " " ;
    
    cout << endl ;
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
