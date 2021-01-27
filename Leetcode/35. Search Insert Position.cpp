#include <bits/stdc++.h>
using namespace std ;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size() ;
        if (target > nums[n - 1]) 
        {
			return n ;
		}
		int ans = 0 ;
		for ( int i = 0 ; i < n ; i++ )
		{
			if (nums[i] > target)
			{
				ans = i ; 
				break ;
			}
			else if (nums[i] == target)
			{
				ans = i ;
				break ;
			}
		}
		return ans ;
	}
};

int main()
{
    fast ;
    int n ;
    cin >> n ;
    
    int target ;
    cin >> target ;
    
    vector<int> nums(n) ;
    for(auto &x : nums) cin >> x ;

    Solution s ;
    int ans = s.searchInsert(nums, target) ;

    cout << ans << endl ;

    return  0 ;
}
