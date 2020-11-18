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
    int cnt = 0 ;
    string s , str = "";
    getline(cin, s) ; 
    vector<string> ans ;
    for(int i = 0; i < s.size() ; i++)
    {
        if(s[i] == ' ' or i == s.size() - 1)
        {
            if (s[i +1] == ' ') continue ;
            ans.push_back(str) ;
            str = "" ;
        }
        else str += s[i] ;
    }
    // for(auto x : ans) cout << x << " " ;
    cout << ans.size() << endl ;
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
