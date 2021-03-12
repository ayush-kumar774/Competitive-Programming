#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
        bool containsDuplicate(vector<int>& nums) {
                set <int> s (nums.begin(), nums.end()) ;
                if (s.size() == nums.size()) {
                        return false ;
                }
                return true;
        }
};

int main() 
{
        Solution sol ;
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &x : v) {
                cin >> x ;
        }
        cout << sol.containsDuplicate(v) << endl ;
        return 0 ;
}