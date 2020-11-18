// https://atcoder.jp/contests/abc172/tasks/abc172_b
#include <bits/stdc++.h>
using namespace std ;
int main() 
{
    string s , t ;
    cin >> s >> t ;
    int counter = 0 ;
    int n = s.size() ;
    for (int i = 0 ;  i < n ; i++) {
        if (s[i] != t[i]) counter++ ;
    }
    cout << counter << endl ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
*/