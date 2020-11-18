// In the name of Aadi Shakti
// You are everything and I am nothing
// Jai Mata Di 

//https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        int n = A.size() ;
        
        vector<int> sortedSquares(n) ;
        
        for(int i = 0 ; i < n ; i++)
        {
            sortedSquares[i] = A[i] * A[i] ;
        }
        
        sort(sortedSquares.begin() , sortedSquares.end()) ;
        
        return sortedSquares ;

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
    for(auto &x : nums) cin >> x ;
    vector<int> ans(n) ;

    Solution s ;
    ans = s.sortedSquares(nums) ;

    for(auto x : ans) cout << x << " " ;
    return 0 ;
}