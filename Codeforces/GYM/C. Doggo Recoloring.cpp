// https://codeforces.com/gym/296487/problem/C
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
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        if (n == 1) {
                cout << "Yes" << endl ;
                return ;
        }
        map<char, int> mp ;
        for (auto x : s) {
                mp[x]++ ;
        }
        bool flag = false ;
        for (auto x : mp) {
                if (x.second >= 2) {
                        flag = true ;
                        break ;
                }
        }
        if (flag) cout << "Yes" << endl ;
        else cout << "No" << endl ;
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