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
    int count2 = count(s.begin(), s.end(), '2') ;
    int count5 = count(s.begin(), s.end(), '5') ;
    //(count2 > count5) ? cout << 2 << endl : cout << 5 << endl ;
    if(count2 == count5) cout << "=" << endl ;
    else if(count2 > count5) cout << 2 << endl ;
    else if(count2 < count5) cout << 5 << endl ;
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
