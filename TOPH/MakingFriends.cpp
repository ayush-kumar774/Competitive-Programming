// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n , counter{0};
    cin >> n ;
    if(n == 1) cout << 0 << endl ;
    else
    {
        for(int i = 2; i < n ; i++)
        {
            if(n % i == 0) counter++ ;
        }
        cout << counter + 1 << endl; 
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