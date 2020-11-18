// https://codeforces.com/problemset/problem/1301/A
#include <bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl '\n'

void solve()
{
    string a, b, c ;
    cin >> a >> b >> c ;
    int flag = 0 ;
    for(int i = 0 ; i < a.size() ; i++)
    {
        if(c[i] != a[i] and c[i] != b[i] ) {
            //cout << "NO" << endl ;
            flag = 1 ;
        }
    } 
    if (flag == 1) cout << "NO" << endl ;
    else cout << "YES" << endl ;
}

int32_t main()
{
    fast ;
    int testcases ;
    cin >> testcases ;
    while (testcases--)
    {
        solve();
    }
    return  0 ;
}