#include <bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl '\n'

void solve()
{
    int a , b ;
    cin >> a >> b ;
    if(a == b)
        cout << 0 << endl ;
    else
    {
       if (a > b) {
           if ( (a - b) % 2 == 0) cout << 1 << endl ;
           else cout << 2 << endl ;
       }
       else if (b > a ){
           if ( (b - a) % 2 != 0) cout << 1 << endl ;
           else cout << 2 << endl ;
       }
    }
}

int32_t main()
{
    fast ; 
    int testcases ;
    cin >> testcases ;
    while (testcases--)
    {
        solve() ;
    }
    return 0 ;
}