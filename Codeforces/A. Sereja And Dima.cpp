// https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;

    vector<int> v ;
    for(auto &x : v) cin >> x ;

    int SerejaSum = 0 , DimaSum = 0 , i = 0 , j = n - 1 , flag = 1;

    while (i <= j)
    {
        if (v[i] >= v[j]) {
            (flag) ? SerejaSum += v[i] : DimaSum += v[j] ;
            flag ^= 1 ;
            i++ ; 
        }
        else
        {
            (flag) ? SerejaSum += v[i] : DimaSum += v[j] ;
            j-- ; 
        }
        
    }
       
    cout << SerejaSum << " " << DimaSum << endl ;
}

int32_t main()
{
    fast ;
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
