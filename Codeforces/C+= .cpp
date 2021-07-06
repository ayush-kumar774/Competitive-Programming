// https://codeforces.com/contest/1368/problem/A

#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int a , b , n , counter = 0 ;
    cin >> a >> b >> n ;
    while ( max(a, b) <= n)
    {
        if (a > b) swap(a , b) ;
        a += b ;
        counter++ ;
    }
    cout << counter << endl ;
}

int32_t main()
{
    int testcases ;
    cin >> testcases ;
    while (testcases--)
    {
        solve() ;
    }
    return 0 ;
}