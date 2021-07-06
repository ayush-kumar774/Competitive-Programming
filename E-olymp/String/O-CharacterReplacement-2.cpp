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
    getline(cin, s) ;
    for(int i = 0 ; i < s.size() ;)
    {
        if(s[i] == 'a' and s[i+1] == 'b' ) {
            cout << "ups" ;
            i += 2 ;
        }
        else {
            cout << s[i]  ;
            i += 1 ;
        }

    }
    cout << endl ;
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
