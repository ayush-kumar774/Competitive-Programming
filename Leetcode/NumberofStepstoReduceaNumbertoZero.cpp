// In the name of Aadi Shakti
// You are everything and I am nothing
// Jai Mata Di 

//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps (int num) {
        long long cnt = 0 ; 
        while(num != 0)
        {
            if (num & 1)
            {
                num -= 1 ;
                //cout << "From odd " << num << endl ;
                cnt++ ;
            }
            else
            {
                num /= 2 ;
                //cout << "From even " << num << endl; 
                cnt++ ;
            }
            
        }

        return cnt ;
    }
};


int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;
    long long n ;
    cin >> n ;
    Solution s ;
    long long ans = s.numberOfSteps(n) ;
    cout << ans << endl ;
}