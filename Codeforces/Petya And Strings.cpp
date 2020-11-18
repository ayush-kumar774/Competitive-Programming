//https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    string a , b;
    cin >> a >> b ;
    transform(a.begin(), a.end(), a.begin() , ::tolower); 
    transform(b.begin(), b.end(), b.begin() , ::tolower); 
    cout << a.compare(b) << endl ;
}

int32_t main()
{
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while (testcases--)
    {
        solve() ;
    }
    return 0 ;
}