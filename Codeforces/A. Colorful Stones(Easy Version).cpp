//https://codeforces.com/problemset/problem/265/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string s , t ;
    cin >> s >> t ;
    int steps = 1 ;
    int j = 0 ;
    for(int i = 0 ; i < t.size() ; i++)
    {
        if(t[i] == s[j]) {
            //cocout << t[i] << " " << s[j] << endl ;
            steps++ ;
            j++ ;
        }
    }
    cout << steps << endl ; 
}
int32_t main()
{
    int testcases = 1 ;
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