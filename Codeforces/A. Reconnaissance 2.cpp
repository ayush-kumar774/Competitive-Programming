// https://codeforces.com/problemset/problem/34/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for(auto &x : v) cin >> x ; 
    int index1 , index2 , sub = 99999 ;
    for(int i = 0 ; i < n ; i++)
    {
        int a = abs(v[i] - v[i + 1] ) ;
        if(sub > a) {
            sub = a ;
            index1 = i ;
            index2 = i + 1 ;
        }
    }
    int last = abs(v[0] - v[n - 1]) ;
    if(sub > last) {
            sub = last ;
            index1 = 0 ;
            index2 = n - 1 ;
    }
    cout << index1 + 1 << " " << index2 + 1 << endl ; 
}

int32_t main()
{
    int testcases = 3 ;
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
/* 6
744 359 230 586 944 442
*/
