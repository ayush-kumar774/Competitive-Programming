// RunTime Error


#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int arr[1000] = {0} ;
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans ;
        for(int i = 0 ; i < nums.size() ; i++) {
            arr[nums[i]]++ ;
        }
        for(int i = 1 ; i <= nums.size() ; i++) {
            if(arr[i] == 0) {
                ans.push_back(i) ;
            }
        }
        return ans ;
    }
};

int main() {
    int n ;
    cin >> n ;

    vector<int> nums(n) , ans ;
    for(auto &x : nums) cin >> x ;

    Solution s ;
    ans = s.findDisappearedNumbers(nums) ;

    for(auto x : ans) cout << x << " ";
    cout << endl ;
    return  0 ;
}