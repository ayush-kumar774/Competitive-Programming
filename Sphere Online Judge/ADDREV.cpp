// https://www.spoj.com/problems/ADDREV/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string str, str2 ;
    cin >> str >> str2 ;
    reverse(str.begin() , str.end()) ; 
    reverse(str2.begin() , str2.end()) ;
    int a = stoi(str) ;
    int b = stoi(str2) ;
    str = to_string(a + b) ;
    reverse(str.begin(), str.end()) ;
    cout << stoi(str) << endl ;  

}
int32_t main()
{
    fast
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