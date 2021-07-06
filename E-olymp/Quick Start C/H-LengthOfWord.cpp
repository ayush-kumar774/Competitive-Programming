
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
    
    // cout << s << endl ;
    // cout << s.size() << endl ;
    int counter = 1 ;
    string str = "" ;
    for(int i = 0 ; i <= s.size(); i++)
    {
        if(s[i] == ' ' or i == s.size() )
        {
            cout << str.size() << " ";
            str = "" ;
        }
        else {
            str += s[i] ;
        }
    }
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
