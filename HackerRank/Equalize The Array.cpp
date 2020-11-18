// https://www.hackerrank.com/challenges/equality-in-a-array/problem

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , maximumFrequency = 0  ;
    cin >> n ;
    map<int, int> mp ;
    for(int i = 0 ; i < n ; i++)
    {
        int x ;
        cin >> x ;
        mp[x]++ ;
    }
    for(auto x : mp) {
        //cout << x.first << " " << x.second << endl ;
        if(x.second > maximumFrequency) maximumFrequency = x.second ;
    }
    //cout << maximumFrequency << endl ;
    cout << n - maximumFrequency << endl ;
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