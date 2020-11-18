// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define all(x) (x).begin() , (x).end()

bool compare(string &s1 , string &s2) {
	return s1.size() < s2.size() ;
}

void solve()
{
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &x : v) cin >> x ;
        sort ( all (v) ) ;
        for (auto x : v) cout << x << " " ;
        cout << endl ;
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
// -std=c++2a -0 name name.cpp && ./name
/*  CODED BY:-
         ___________________________________
        |                       ___         |
        |  /\   /\  \ /  |  |  |___   |__|  |
        | /~~\ /~~\  |   |__|   ___|  |  |  |
        |___________________________________|
*/