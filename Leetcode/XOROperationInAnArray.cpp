#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n) ;
        if(n == 1) return start ;
        else {
            for(int i = 0 ; i < n ; i++)
            {
                int a = start + 2 * i ;
                nums[i] = a ;
            }
            int ans = 1 ;
            for(int i = 0 ; i < n ; i++)
            {
                ans ^= nums[i] ;
            }
            //cout << ans << endl ;
            return ans - 1 ;
        }
    }
};

int main()
{
    int testcases ;
    cin >> testcases ;
    while (testcases--)
    {
        int n ;
        cin >> n ;
        int start ;
        cin >> start ;

        Solution s ;
        //s.xorOperation(n, start) ;
        cout << s.xorOperation(n, start) << endl ;/* code */
    }
}