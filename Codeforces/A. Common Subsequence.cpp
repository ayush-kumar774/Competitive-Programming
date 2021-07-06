// https://codeforces.com/contest/1382/problem/0

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m , flag = 0, ans;
    cin >> n >> m ;
    vector<int> a (n) , b (m) ;
    for(auto & x : a) cin >> x ;
    for(auto & x : b) cin >> x ;
    sort(a.begin(), a.end()) ;
    sort(b.begin(), b.end()) ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(a[i] == b[j]) 
            {
                flag = 1 ;
                ans = a[i] ; 
                break;
            }
            if(flag == 1) break ;
        }
    }
    if(flag == 0) cout << "NO" << endl;
    else cout << "YES\n" << "1 " << ans << endl ; 
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
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
