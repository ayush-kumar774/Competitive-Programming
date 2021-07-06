#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>::iterator it ;
        vector<int> ans ;
        it = unique(nums.begin(), nums.end());
        nums.resize(std::distance(nums.begin(), it)); 
        // for(auto x : nums) cout << x << " ";
        for(int i = 1 ; i <= nums[nums.size() - 1 ] ; i++)
        {
            it = find(nums.begin(), nums.end(), i) ;
            if(it == nums.end()) ans.push_back(i) ;
        }
        // cout << nums[nums.size() - 1 ] << endl ;
        //for(auto x : ans) cout << x << " ";
        return ans;
    }
};

int main()
{
    int n ;
    cin >> n ;
    vector<int> v (n) , ans ;
    for(auto &x : v)  cin >> x ;

    Solution s ;
    ans = s.findDisappearedNumbers(v) ;
    for(auto x : ans) cout << x << " " ;
    cout << endl ;
}