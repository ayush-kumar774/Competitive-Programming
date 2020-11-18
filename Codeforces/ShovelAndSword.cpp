// https://codeforces.com/problemset/problem/1366/A

// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int noOfSticks, noOfDiamonds ;
    cin >> noOfSticks >> noOfDiamonds ;
    cout << min (min(noOfSticks, noOfDiamonds) , (noOfDiamonds + noOfSticks)/3 ) << endl ;
}

int32_t main()
{
    fast;
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
}