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
    char c ;
    string s ;
    getline(cin , s) ;
    cin >> c ;
    c = tolower(c) ;
    // cout << c << endl ;
    transform(s.begin(), s.end(), s.begin(), ::tolower) ;
    int ans = count(s.begin(), s.end(), c) ;
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
