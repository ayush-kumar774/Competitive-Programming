// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di 

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n ;
    cin >> n ;
    int count2 = 0 , count3 = 0 ;
    while (n % 2 == 0)
    {
        n /= 2 ;
        count2++ ;
    }
    while (n % 3 == 0)
    {
        n /= 3 ;
        count3++ ;
    }
    if (n == 1 && count2 <= count3) {
        cout << count3 - count2 + count3 << endl ;
    }
    else cout << -1 << endl ;                                 
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0  ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/