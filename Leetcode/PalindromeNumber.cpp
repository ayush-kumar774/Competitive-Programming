// In the name of Aadi Shakti
// You are everything and I am nothing
// Jai Mata Di 

//https://leetcode.com/problems/palindrome-number/

#include<bits/stdc++.h> 
using namespace std ;

class Solution {
public:
    bool isPalindrome(int x) {
        string a , b ;
        a = to_string(x) ;
        b = a ;
        reverse(a.begin(), a.end() ) ;
        // cout << a << endl ;
        return (a == b) ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;
    
    int n ;
    cin >> n ;

    Solution s ;
    bool ans = s.isPalindrome(n) ;
    cout << ans << endl ;
}