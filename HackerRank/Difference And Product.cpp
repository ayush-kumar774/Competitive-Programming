#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define endl "\n"

void solve()
{
    int d , p ;
    //cin >> d >> p ;
    cin >> p ;
    int a , b ;
    long double sr = sqrt(p) ;
    if ((sr - floor(sr)) == 0) cout << "Perfect square" << endl ;
    else cout << "Not perfect sqaure" << endl ;

}

int32_t main()
{
    int testcases ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}