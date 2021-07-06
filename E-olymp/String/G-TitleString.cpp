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
    // s[0] = s[0] - 32 ;
    for(int i = 1 ; i < s.size() ; i++)
    {
        if(s[i - 1] == ' ')
        {
            if(s[i] == ' ') continue ;
            s[i] = s[i] - 32 ;   
        }
    }
    if( (s[0] < 90 and s[0] > 64 ) or s[0] == 32)
    {
        cout << s << endl;
        return ; 
    }
    else {
        s[0] -= 32 ;
        cout << s << endl ;
        return ;
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
