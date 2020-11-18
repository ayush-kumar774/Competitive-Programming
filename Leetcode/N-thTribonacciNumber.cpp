// https://leetcode.com/problems/n-th-tribonacci-number/

#include <bits/stdc++.h>
using namespace std ;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl "\n"
#define int long long

class Solution {
public:
    int tribonacci(int n) {
        int t, t1 = 0 , t2 = 1 , t3 = 1;
        if(n == 0) return 0 ;
        else if(n == 1) return 1 ;
        else if(n == 2) return 1 ;

        for(int i = 3 ; i <= n ; i++)
        {
            t = t1 + t2 + t3 ;
            t1 = t2 ;
            t2 = t3 ;
            t3 = t ;
        }

        return t ;
    }
};

int32_t main()
{
    int n ;
    cin >> n ;

    Solution s ;
    int ans = s.tribonacci(n) ;

    cout << ans << endl ;

    return 0 ;
}