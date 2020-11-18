// https://codeforces.com/contest/680/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    vector<int> v(5) ;
    
    vector<int> freq(101, 0) ;
    int sum = 0 ;
    for(auto &x : v) {
        cin >> x ;
        sum += x ;
        freq[x] ++ ;
    }
    int maxx = 0 ;
    for(int i = 0 ; i < 5 ; i++) {
        if(freq[v[i]] == 2 || freq[v[i]] == 3) {
            maxx = max(freq[v[i]] * v[i] , maxx) ;
        }
        else if (freq[v[i]] >= 3) {
            maxx = max(3 * v[i] , maxx) ;
        }
    }
    cout << sum - maxx << endl ;
}

int32_t main()
{
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
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