// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

//#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

void solve()
{
    int n ;
    cin >> n ;
    float ans = 0 ; 
    for(int i = 1 ; i <= n ; i++)
    {
        ans += float(1)/( float(i) * float(i + 1) );
    }

    printf("%.6f", ans);
}

int32_t main()
{
    //fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
