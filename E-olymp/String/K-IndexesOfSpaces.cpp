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
    vector<int> ans ;
    for(int i = 0; i < s.size() ; i++)
    {
        if(s[i] == ' ') {
            ans.push_back(i) ;
        }
    }
    if(ans.size() ) {
        sort(ans.begin() , ans.end()) ;
        cout << ans[0] << " " << ans[ans.size() - 1] << endl ;
        return ;
    }
    cout << -1 << endl;  
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
