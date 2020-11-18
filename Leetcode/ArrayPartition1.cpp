//https://leetcode.com/problems/array-partition-i/

#include <bits/stdc++.h>
using namespace std ;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0 ;
        sort( nums.begin(), nums.end() ) ;
        for(int i = 0 ; i < nums.size() ; i += 2)
        {
            sum += min(nums[i] , nums[i + 1]) ;
        }

        return sum ;
    }
};

int main()
{
    fast ;
    int n ;
    cin >> n ;
    
    vector<int> nums(n) ;
    for(auto &x : nums) cin >> x ;

    Solution s ;
    int ans = s.arrayPairSum(nums) ;

    cout << ans << endl ;

    return  0 ;
}