#include <bits/stdc++.h>
using namespace std ;
#define int long long

class Solution{
        public:
        bool containsDuplicate(vector<int> &nums, int k) {
                int minn = INT_MAX ;
                map<int, int> mp ;
                for (int i = 0 ; i < nums.size() ; i++) 
                {
                        if (mp.find(nums[i]) != mp.end()) 
                        {
                                int a = mp[nums[i]] ;
                                minn = min(minn, (abs(a - (i + 1)))) ;
                                if (minn <= k) {
                                        return true ;
                                }
                                mp[nums[i]] = i + 1 ;
                        }
                        else 
                        {
                                mp.insert({nums[i], (i + 1)}) ;
                        }
                }
                return false ;
        }
};

int32_t main()
{
        int n ;
        cin >> n ;
        vector <int> nums (n) ;
        for (auto &x : nums) {
                cin >> x ;
        }
        int k ;
        cin >> k ;
        Solution sol ;
        cout << sol.containsDuplicate(nums, k) << endl ;
        return 0 ;
}