#include <bits/stdc++.h>
using namespace std ;

class Solution {
        public:
        int singleNumber(vector<int> &nums) {
                int ans = 0 ;
                map<int, int> mp ;
                for (auto x : nums) {
                        mp[x]++ ;
                }
                for (auto x : mp) {
                        if (x.second == 1) {
                                ans = x.first ;
                                break ;
                        }
                }
                return ans ;
        }
};

int main()
{
        Solution sol;
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &x : v) {
                cin >> x ;
        }
        int ans = sol.singleNumber(v) ;
        cout << ans << endl ;
        return 0 ;
}