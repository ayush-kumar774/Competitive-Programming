//https://leetcode.com/problems/remove-element/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto i = nums.begin() ; i != nums.end(); i++) {
            if( *i == val ) {
                nums.erase(i) ;
                i-- ;
            }
        }
        //for(auto x : nums) cout << x << " " ;
        //cout << endl ;
        return nums.size() ;
    }
};

int main() {
    int n ;
    cin >> n ;
    
    vector<int> nums(n) ;
    for(auto &x : nums) cin >> x ;

    int val ;
    cin >> val ;

    Solution s ;
    cout << s.removeElement(nums, val) ;

    return 0 ;
}