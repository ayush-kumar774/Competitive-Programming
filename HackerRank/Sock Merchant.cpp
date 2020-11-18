//https://www.hackerrank.com/challenges/sock-merchant/problem
#include <bits/stdc++.h>
using namespace std ;

void solve()
{
    int n, ans = 0 ;
    cin >> n ;
    int arr[n] ;
    for(auto &x : arr) cin >> x ;
    
    map<int, int> mp ;
    
    for(int i = 0 ; i < n ; i++)
        mp[arr[i]]++ ;
    
    for(auto x : mp)
    {
        if(x.second % 2 == 1) {
            int res = (x.second - 1 ) / 2 ;
            ans += res ;  
        }
        else if (x.second % 2 == 0){
            ans += x.second / 2 ;
        }
    }

    cout << ans << endl ;
}

int32_t main()
{
    int testcases = 1 ;
    //cin >> testcases ;
    while (testcases--)
    {
        solve() ;
    }
    
    return 0 ;
}