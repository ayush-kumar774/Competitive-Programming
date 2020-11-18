#include <bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl '\n'

int arr[52] = {0} ;

void solve()
{
    int n ;
    cin >> n ;
    n *= 2 ;
    vector<int> ans ;
    while(n--)
    {
        int x ;
        cin >> x ;
        if(arr[x] == 0) {
            ans.push_back(x) ;
        }
        arr[x]++ ;
    }
    for(auto x : ans) cout << x << " ";
    cout << endl ;
    for(int i = 0 ; i < 52 ; i++ ) arr[i] = 0 ;
}

int32_t main()
{
    int testcases = 1 ;
    cin >> testcases ;
    while (testcases--)
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