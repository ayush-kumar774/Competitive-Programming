// In the name of Aadi Shakti
// You are everything and I am nothing
// Jai Mata Di 

//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> smallerNumbersThanCurrent(n);

        int cnt = 0 ;
        for (int i = 0 ; i < n ; i++)
        {
            for(int j = 0; j < n ; j++)
            {
                if(nums[i] > nums[j]) cnt++;
            }
            smallerNumbersThanCurrent[i] = cnt ;
            cnt = 0 ;
        }

        // for(auto x : smallerNumbersThanCurrent) cout << x << " " ;
        // cout << endl ;
        return smallerNumbersThanCurrent ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;

    Solution s ;
    int n ;
    cin >> n ;
    vector<int> nums (n) ;
    for(int i = 0; i < n ; i++) cin >> nums[i] ;
    
    vector<int>ans ;
    ans = s.smallerNumbersThanCurrent(nums);
    // cout << endl ;
    for(auto x: ans) cout << x << " " ;
    return 0 ;
}
