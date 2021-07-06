#include <bits/stdc++.h>
using namespace std ;
#define int long long

class Solution {
public:
        int maxArea(vector<int>& height) 
        {
                int maxxArea = 0 ;
                int len = (int)height.size() - 1 ;
                for (int i = 0 ; i < (int)height.size() - 1 ; i++)
                {
                        maxxArea = max(maxxArea , min(height[i], height[(int)height.size() - 1]) * len) ;
                        cout << maxxArea << endl ;
                        len-- ;
                }
                
                return maxxArea ;
        }
};

int32_t main()
{
        int n ;
        cin >> n ;
        vector<int> height(n) ;
        for (auto &x : height) 
        {
                cin >> x ;
        }
        Solution sol ;
        int ans = sol.maxArea(height) ;
        cout << ans << endl ;
        return 0 ;
}