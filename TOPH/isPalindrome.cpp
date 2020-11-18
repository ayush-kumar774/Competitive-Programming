// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    string str , s ;
    cin >> str ;
    s = str ;
    reverse(str.begin(), str.end()) ;
    if(str == s) cout << "Yes\n" ;
    else cout << "No\n" ;
}

int32_t main()
{
    int testcase  = 1 ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}