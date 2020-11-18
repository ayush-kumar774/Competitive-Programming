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
        string str ;
        cin >> str ;
        int n = str.size() ;
        if (n % 2 != 0) {
                cout << -1 << endl ;
                return ;
        }
        int x = 0 , y = 0 ;
        for (int i = 0 ; i < n ; i++) {
                if (str[i] == 'U') y++ ;
                if (str[i] == 'D') y-- ;
                if (str[i] == 'R') x++ ;
                if (str[i] == 'L') x-- ;
                
        }
        cout << (abs(x) + abs(y)) / 2 << endl ;
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