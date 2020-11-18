// https://codeforces.com/problemset/problem/1291/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , evenCounter = 0 , oddCounter = 0 ;
    string s ;
    cin >> n >> s ;
    vector<char>ans ;
    for(int i = 0;  i < n ; i++)
    {
        if ( (s[i] - 48) % 2 == 0 ) evenCounter++ ;
        else if ((s[i] - 48) % 2 != 0) {
            oddCounter++ ;
            ans.push_back(s[i]) ;
        }
    }
    //cout << evenCounter << " " << oddCounter << endl ;
    if(oddCounter < 2) cout << -1 << endl ;
    else 
    {
        for(int i = 0 ; i < 2 ; i++)
        {
            cout << ans[i]  ;
        }
    }

    cout << endl; 
}
int32_t main()
{
    fast ;
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