#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define all(x)  (x).begin() , (x).end() 

void solve()
{
        int n , i , j , k ;
        cin >> n;
        for ( j = 0 ; j <= 2 * n ; j++ )
        {
                i = n - abs (j - n);
                k = 0;
                while ( k < n - i )
                {
                        cout << "  ";
                        k++ ;
                }
                k = i ;
                while( k > -i )
                {
                        cout << i - abs(k) << " " ;
                        k-- ;
                }
                cout << 0 << endl;
        }
    
}
int32_t main()
{
        fast ;
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
        int testcases = 1;
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