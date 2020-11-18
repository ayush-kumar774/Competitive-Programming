#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> createTargetArray ;
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++)
        {
            int num = index[i] ;
            createTargetArray.insert(createTargetArray.begin() + num, nums[i]) ;
        }

        //for(auto x : createTargetArray) cout << x << " " ;
        return createTargetArray ;
    }
};

int main()
{
    int n ;
    cin >> n ;
    vector<int> nums(n) , index(n) ;
    for(auto &x : nums ) cin >> x ;
    for(auto &x : index) cin >> x ;

    Solution s ;
    s.createTargetArray(nums, index ); 

}