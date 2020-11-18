// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

#include <bits/stdc++.h>
using namespace std ;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

class Solution {
public:
    vector<int> replaceElements(vector<int>& A) 
    {
        for(int i = 0 ;i < A.size() - 1 ; i++)
        {
            int max = A[ i + 1 ] ;
            for(int j = i + 1 ; j < A.size() ; j++) 
            {
                if( A[j] > max )
                    max = A[j];
            }
            A[i] = max;
        }
        A[ A.size() - 1 ] = -1;
        return A;
    }
};

int main()
{
    fast ;
    int n ;
    cin >> n ;

    vector<int> arr (n) , ans ;
    for(auto &x : arr) cin >> x ;

    Solution s ;
    ans = s.replaceElements(arr) ;

    for(auto &x : ans) cout << x << " ";
    cout << endl ;

    return 0 ;
}