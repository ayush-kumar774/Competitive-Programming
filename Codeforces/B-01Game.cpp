// https://codeforces.com/problemset/problem/1373/B

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
    string s ;
    cin >> s ;
    int c0 = count (s.begin(), s.end() , '0') ;
    int c1 = count (s.begin(), s.end() , '1') ;
    if(min(c0, c1) % 2 == 0) cout << "NET" << endl; 
    else cout << "DA" << endl ;
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
