// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
        int n , p ;
        cin >> n >> p ;
        long long sum1{0} , sum2{0} ;
        while(n--)
        {
            int x ;
            cin >> x ;
            if(x >= p) {
                sum2 += p ;
            }
            else sum2 += x ;
            sum1 += x ;
        }
        cout << sum1 - sum2 << endl ;
}

int32_t main()
{
    fast;
    int testcases ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
}