// In the name of Aadi Shakti
// You are everything and I am nothing
// Jai Mata Di 

//https://leetcode.com/problems/palindrome-number/

#include<bits/stdc++.h> 
using namespace std ;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s ;
        for(auto x : nums) {
            s.insert(x) ;
        }
        nums.clear() ;
        copy(s.begin(), s.end(), back_inserter(nums)); 
        // for (auto x : nums) cout << x << " " ;
        int n = nums.size() ;
        return n ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;
    
    int n ;
    cin >> n ;
    vector <int > v (n) ;
    for (auto &x : v) {
        cin >> x ;
    }
    Solution s ;
    s.removeDuplicates(v) ;
    for(auto x : v) cout << x << " " ;
    cout << endl ;
}