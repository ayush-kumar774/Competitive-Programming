// https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , noOfSteps = 0 ;
    cin >> n ;
    int clouds[n] ;
    for(int i = 0 ; i < n ; i++) cin >> clouds[i] ;
    for(int i = 0 ; i < n ;)
    {
        if (clouds [i + 1] == 0 and clouds [i + 2] == 1) {
            //cout << "+2" << endl ;
            noOfSteps++;
            i++;
        }
        else if (clouds [i + 1] == 0 and clouds [i + 2] == 0) {
            //cout << "+2" << endl ;
            noOfSteps++;
            i += 2;
        }
        else if (clouds [i + 1] == 1 and clouds [i + 2] == 0) {
            //cout << "+2" << endl ;
            noOfSteps++;
            i += 2;
        }
        else if(i == n - 1 ) {
            break ;
        }
    }
    cout << noOfSteps << endl ; 
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
