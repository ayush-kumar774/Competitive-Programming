#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
        int n ;
        cin >> n ;
        string str ;
        cin >> str ;
        string st[8];
        st[0] = "vaporeon";
        st[1] = "jolteon";
        st[2] = "flareon";
        st[3] = "espeon";
        st[4] = "umbreon";
        st[5] = "leafeon";
        st[6] = "glaceon";
        st[7] = "sylveon";
        bool flag = false ;
        for(int j = 0 ; j < 8 ; j++)
        {
            if( st[j].size() != n )
                continue;
            for(int i = 0 ; i < n ; i++)
            {
                int p = i;
                if(str [p] != st[j][p] && str [p] != '.')
                    break;
                if( i == n - 1)
                {
                    cout << st[j] << endl;
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
}


int32_t main () {
        fast;
        int testcases = 1 ;
        //cin >> testcases ;
        while(testcases--) {
            solve() ;        
        }
        return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/

