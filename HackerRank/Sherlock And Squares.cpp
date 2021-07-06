// https://www.hackerrank.com/challenges/sherlock-and-squares/problem 

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int a , b , cnt = 0 ;
    cin >> a >> b ;
    int c = sqrt(a) ;
    int d = sqrt(b) ;

    for(int i = c; i <= d ;i++)
    {
        int square = i * i ;
        if (square >= a and square <= b) {
            cnt++ ;
            // cout << square << endl ;
        }
    }

    cout << cnt << endl; 
}

int32_t main()
{
    int testcases = 1 ;
    cin >> testcases ;
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