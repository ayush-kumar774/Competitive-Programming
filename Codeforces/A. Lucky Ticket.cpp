// https://codeforces.com/problemset/problem/146/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    int _4 , _7 ;
    _4 = count(s.begin(), s.end(), '4') ;   
    _7 = count(s.begin(), s.end(), '7') ;
    if(_4 + _7 != n) {
        cout << "NO" << endl ;
    }   
    else
    {
        int leftSum = 0 , rightSum = 0 ;
        for(int i = 0 ; i < ( n / 2 ) ; i++)
        {
            leftSum += (s[i] - 48) ;
        }
        for(int i = (n / 2) ; i < n ; i++)
        {
            rightSum += (s[i] - 48) ;
        }

        if(leftSum == rightSum) {
            cout << "YES" << endl ;
        }
        else cout << "NO" << endl ;
    }
    
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
