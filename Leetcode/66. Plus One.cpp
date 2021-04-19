#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
        vector<int> plusOne(vector<int>& digits) {
                int n = digits.size() ;
                if (digits[n - 1] == 9) {
                        digits[n - 1] = 0 ;
                        digits[n - 2] += 1 ;
                }
                else {
                        digits[n - 1] += 1 ;
                }
                return digits ;
        }
};

int main()
{
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for(auto &x : v) {
                cin >> x ;
        }
        Solution sol ;
        vector<int> res = sol.plusOne(v) ;
        for(auto x : res) {
                cout << x << " " ;
        }
        cout << endl ;
        return 0 ;
}