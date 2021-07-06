#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    void moveZeroes ( vector<int>& nums ) {
        int countZeroes = count ( nums.begin(), nums.end(), 0 ) ;
        vector<int> ans ;
        
        for ( int i = 0 ; i < nums.size(); i++ ) {
            if( nums[i] != 0 ) {
                ans.push_back ( nums[i] ) ;
            }
        }
        
        nums.clear() ;
        
        for ( int i = 0 ; i < ans.size() ; i++ ) {
            nums.push_back ( ans[i] ) ;
        }
        for ( int i = 0 ; i < countZeroes; i++ ) {
            nums.push_back(0) ;
        }
    }
};

int main() {
    int n ;
    cin >> n ;

    vector<int> nums(n) ;
    for(auto &x : nums) cin >> x ;

    Solution s ;
    s.moveZeroes(nums) ;

    for(auto x : nums) cout << x << " " ;
    cout << endl ;
    return 0 ;
}