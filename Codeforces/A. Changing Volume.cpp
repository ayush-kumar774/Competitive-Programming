// https://codeforces.com/problemset/problem/1255/A
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
    int a , b ;
    cin >> a >> b ;
    int steps = 0 ;
    int rem = abs(a - b) ;
    steps += (rem / 5) ;
    rem = rem % 5 ;
    steps += (rem / 2) ;
    rem = rem % 2 ;
    steps += rem / 1 ;
    //rem = rem % 1 ;
    cout << steps << endl ;
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
