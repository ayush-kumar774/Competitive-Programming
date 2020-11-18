// https://www.e-olymp.com/en/problems/1609
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
    int n ;
    cin >> n ;
    while (n < 0 ) {
        n *= -1 ;
    }
    int search  ;
    cin >> search ;
    string s ;
    s = to_string (n) ;
    int ans = 0 ;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] - 48 == search) ans++ ;
    }
    cout << ans << endl ;
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
