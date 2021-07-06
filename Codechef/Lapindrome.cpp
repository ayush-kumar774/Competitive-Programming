// https://www.codechef.com/problems/DECINC

// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long

void solve()
{
    string s , ans = "", ans2 ="";
    cin >> s ;
    if(s.size() & 1)
    {
        for(int i = 0 ; i < s.size()/2 ; i++)
        {
            ans += s[i] ;
        }
        for(int i = s.size()/2 + 1  ; i < s.size() ; i++)
        {
            ans2 += s[i] ;
        }
        sort(ans.begin(), ans.end());
        sort(ans2.begin(), ans2.end());
        if(ans == ans2 ) {
            cout << "YES\n" ;
        } 
        else cout << "NO\n" ;
    }
    else
    {
        for(int i = 0 ; i < s.size()/2 ; i++)
        {
            ans += s[i] ;
        }
        for(int i = s.size()/2 ; i < s.size() ; i++)
        {
            ans2 += s[i] ;
        }
        sort(ans.begin(), ans.end());
        sort(ans2.begin(), ans2.end());
        if(ans == ans2 ) {
            cout << "YES\n" ;
        } 
        else cout << "NO\n" ;
    }
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
