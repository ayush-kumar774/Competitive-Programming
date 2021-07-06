// https://www.codechef.com/problems/DECINC

// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long

void solve()
{
    int n ;
    cin >> n ;
    if(n % 4 == 0) cout << n + 1 << endl; 
    else cout << n - 1 << endl; 
}

int32_t main()
{
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
