// https://codeforces.com/problemset/problem/22/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    map<int,int> mp ;
    for(int i = 0 ; i < n ; i++) 
    {
        int x ;
        cin >> x ;
        mp[x]++ ;
    }
    if (mp.size() == 1) {
        //for(auto x : mp) cout << x.first << endl ;
        cout << "NO" << endl;
    }
    else
    {
        int i = 0 ;
        for(auto x : mp) {
            i++ ;
            if(i == 2) cout << x.first << endl; 
        }
    }
    
}

int32_t main()
{
    int testcases = 1 ;
    //cin >> testcases ;
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