#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
void solve()
{
    int burger , soda , combo ;
    cin >> burger >> soda >> combo ;
    int profit;
    profit = burger - (combo - soda) ;
    cout << profit << endl ;
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