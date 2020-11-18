// In the name of Aadi Shakti
// You are everything and I am nothing
// Jai Mata Di 

//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

// Time Limit Exceeds 


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> countSmaller(n) ;
        int cnt = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i + 1 ; j < n ; j++)
            {
                if (nums[i] > nums[j] ) cnt++ ;
            }
            countSmaller[i] = cnt ;
            cnt = 0 ;
        }    

        return countSmaller ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;

    int n ;
    cin >> n ;

    vector<int> countSmaller(n) ;
    vector<int> nums(n) ;
    for(auto &x : countSmaller) cin >> x ;

    Solution s ;
    nums = s.countSmaller(countSmaller) ;
    for(auto x: nums) cout << x << " " ; 
    cout << endl ;

    return 0 ;
}