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
    string s ;
    getline(cin, s) ;
    cout << s[1] << s[3] << s[9] << endl ;
    cout << s[0] << s[1] << s[s.size() - 1] << endl ;
    cout << s[s.size() - 5] << s[s.size() - 4] << s[s.size() - 3] << s[s.size() - 2] << s[s.size() - 1 ] << endl ; 
    for(int i = 0; i < s.size() - 4 ; i++) cout << s[i] ;
    cout << endl ; 
    for(int i = 0; i < s.size(); i+=2)
    {
        cnt++ ;
        cout << s[i] ;
    }
    cout << endl ;
    cout << cnt << endl ;
    for(int i = s.size() - 1 ; i >= 0; i -= 2)
    {
        //cnt++ ;
        cout << s[i] ;
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
