// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
        string s ;
        string t ;
        cin >> s >> t ;
        if (s[0] == '0') 
                s.erase(s.begin(), find_if(s.begin(), s.end(), [](char c) { return c != '0';}));
        if (t[0] == '0')
                t.erase(t.begin(), find_if(t.begin(), t.end(), [](char c) { return c != '0';}));
        if (s.size() > t.size()) cout << ">" << endl ;
        else if (s.size() < t.size()) cout << "<" << endl ;
        else if (s.compare(t) < 0) cout << "<" << endl ;
        else if (s.compare(t) == 0) cout << "=" << endl ;
        else cout << ">" << endl ;
}

int32_t main()
{
        fast ;
        int testcases = 1 ;
        // cin >> testcases ;
        while(testcases--)
        {
                solve() ;
        }
        return 0;
}
/*  CODED BY:-
         ___________________________________
        |                       ___         |
        |  /\   /\  \ /  |  |  |___   |__|  |
        | /~~\ /~~\  |   |__|   ___|  |  |  |
        |___________________________________|
*/