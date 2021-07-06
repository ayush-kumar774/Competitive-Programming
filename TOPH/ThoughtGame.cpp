// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n ;
    cin >> n ;
    while(n--)
    {
        int a, b ;
        cin >> a >> b ;
        if( ( (a+b) / 2 )  & 1 ) cout << "Oops!\n" ;
        else cout << "Sadia will be happy.\n" ;
    }
}

int32_t main()
{
    int testcase  = 1 ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}