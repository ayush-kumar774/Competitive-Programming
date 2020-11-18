// https://www.hackerrank.com/challenges/two-strings/problem

#include <bits/stdc++.h>
using namespace std ;

void solve()
{
    string a , b ;
    cin >> a >> b ;
    int flag = 0 ;
    for(int i = 0 ; i < a.size() ; i++)
    {
        int cn = count(b.begin(), b.end(), a[i]) ;
        if(cn > 0) {
            flag = 1 ;
            break ;
        }
    }
    if(flag == 1) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}

int main()
{
    int testcases ;
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