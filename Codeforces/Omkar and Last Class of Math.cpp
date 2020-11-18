#include <bits/stdc++.h>
using namespace std ;
#define int long long 
void solve()
{
    int n ;
    cin >> n ;
    int ans = 0 ;
    for(int i = 2 ; i < n ; i++)
    {
        if(n % i == 0)
        {
            ans = i ;
            break ;
        }
    }
    if(ans == 0) ans = n ;
    cout << (n / ans) << " " << n - (n / ans ) << endl; 
    
}

int32_t main()
{
    int testcases = 1 ;
    cin >> testcases ;
    while (testcases--)
    {
        solve();
    }
    
}