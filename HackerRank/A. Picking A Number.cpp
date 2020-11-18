// https://www.hackerrank.com/challenges/picking-numbers/problem
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector<vector<int>> v(n) ;
    vector<int> nums(n) ;
    for(auto &x : nums) cin >> x ;
    for(int i = 0 ; i < n ; i++) {
        v[i].push_back(nums[i]) ;
    }

    for(int i = 0 ; i < n ; i++) {
        for(int j = i + 1 ; j < n ; j++) {
            if ( abs(nums[i] - nums[j]) <= 1 ) {
                v[i].push_back(nums[j]) ;
            }
        }
    }

    for(auto x : v) {
        for (auto y : x) {
            cout << y << " " ;
        }
        cout << endl ;
    }
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
