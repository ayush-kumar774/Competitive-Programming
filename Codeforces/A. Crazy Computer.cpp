// https://codeforces.com/contest/716/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , c ;
    cin >> n >> c ;
    vector<int> v(n) ;
    for(auto &x : v) cin >> x ;
    int words = 0 ;
    for(int i = 0 ; i < n - 1; i++)
    {
        if(abs(v[i] - v[i + 1] ) <= c) {
            //cout << "Such pairs are " << v[i] << " " << v[i+1] << endl ;
            words++ ;
        }
        else
        {
            words = 0 ;
        }
    }
    cout << words + 1 << endl ;
}

int32_t main()
{
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