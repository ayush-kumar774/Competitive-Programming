// In the name of Aadi Shakti
// You are everything and I am nothing
// Jai Mata Di 

//https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int ans = floor(log10(nums[i]) + 1) ;
            if(ans % 2 == 0) 
                cnt++ ;
        }
        return cnt ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;

    int n ;
    cin >> n ;
    vector<int> nums(n) ;
    for(auto &x: nums) cin >> x ;

    Solution s ;
    long long ans = s.findNumbers(nums) ;
    cout << ans << endl ;

    return 0 ;
}