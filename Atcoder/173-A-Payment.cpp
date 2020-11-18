// https://atcoder.jp/contests/abc173/tasks/abc173_a
#include <bits/stdc++.h>
using namespace std ;
int main() 
{
    long long n ;
    cin >> n ;
    if (n % 1000 == 0) cout << 0 << endl ;
    else cout << 1000 - (n % 1000) << endl ;
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/