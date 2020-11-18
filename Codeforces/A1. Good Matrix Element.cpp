// https://codeforces.com/problemset/problem/177/A1

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0) ;
#define endl '\n'
 
void solve()
{
    int n ;
    cin >> n ;
    int element , sum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> element ;
            if(i == j or i + j == (n - 1) or i == n / 2 or j == n /2) 
                sum += element ;
        }
    }
    cout << sum << endl ;
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