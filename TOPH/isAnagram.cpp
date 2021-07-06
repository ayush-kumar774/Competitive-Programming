// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    string str, str2 ;
    cin >> str >> str2 ;
    sort(str.begin(), str.end());
    sort(str2.begin(), str2.end());
    if(str == str2) cout << "Yes\n" ;
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