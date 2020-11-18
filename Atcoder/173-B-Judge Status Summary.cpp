// https://atcoder.jp/contests/abc173/tasks/abc173_b 
#include <bits/stdc++.h>
using namespace std ;
int main() 
{
    long long n ;
    cin >> n ;
    string a ="AC" , b = "WA" , c = "TLE" , d = "RE" ;
    int aa = 0 , bb = 0 , cc = 0 , dd = 0 ;
    while(n--) {
        string s ;
        cin >> s ;
        if (s == a) aa++ ;
        if (s == b) bb++ ;
        if (s == c) cc++ ;
        if (s == d) dd++ ;
    }
    cout << "AC x " << aa << endl ;
    cout << "WA x " << bb << endl ;
    cout << "TLE x " << cc << endl ;
    cout << "RE x " << dd << endl ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/