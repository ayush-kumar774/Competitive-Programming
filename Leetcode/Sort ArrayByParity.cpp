// https://leetcode.com/problems/sort-array-by-parity/

#include <bits/stdc++.h>
using namespace std ;

#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
#define endl "\n"

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> sortArrayByParity ;
        
        for(int i = 0 ; i < A.size() ; i++)
        {
            if(A[i] % 2 == 0) sortArrayByParity.push_back(A[i]) ; 
        }

        for(int i = 0 ; i < A.size() ; i++)
        {
            if(A[i] & 1) sortArrayByParity.push_back(A[i]) ; 
        }

        return sortArrayByParity ;
    }
};

int main()
{
    int n ;
    cin >> n ;
    
    vector<int> A (n) , ans ;
    for(auto &x : A) cin >> x ; 

    Solution s ;
    ans = s.sortArrayByParity(A) ;

    for(auto x : ans) cout << x << " " ;
    cout << endl ;
}