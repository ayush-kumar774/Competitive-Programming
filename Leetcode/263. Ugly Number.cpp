#include <bits/stdc++.h>
using namespace std ;
#define int long long

class Solution {
        public:
        bool isUgly(int n) {
                if (n < 1) return false ;
                while ( n % 2 == 0 ) {
                        n /= 2 ;
                }
                while ( n % 3 == 0 ) {
                        n /= 3 ;
                }
                while ( n % 5 == 0 ) {
                        n /= 5 ;
                }
                return (n == 1) ;
        }
};


int32_t main()
{
        int n ;
        cin >> n ;
        Solution sol ;
        cout << sol.isUgly(n) << endl ;
        return 0 ;
}