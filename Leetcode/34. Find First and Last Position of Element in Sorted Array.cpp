#include <bits/stdc++.h>
using namespace std ;
#define int long long

class Solution {
public:
        vector<int> searchRange(vector<int>& v, int x) {
                vector<int> index;
                vector<int>::iterator last, first;
                first = lower_bound(v.begin(), v.end(), x);
                if (first == v.end() || *first != x)
                {
                        index.push_back(-1);
                        index.push_back(-1);
                        return index;
                }
                last = upper_bound(v.begin(), v.end(), x);
                index.push_back(first - v.begin());
                index.push_back(last - v.begin() - 1);
                return index;
        }
};

int32_t main()
{
        int n ;
        cin >> n ;
        vector<int> nums(n) ;
        for (auto &x : nums) 
        {
                cin >> x ;
        }
        int searchElement ;
        cin >> searchElement ;
        Solution sol ;
        vector<int> ans = sol.searchRange(nums, searchElement) ;
        for (auto x : ans) {
                cout << x << " " ;
        }
        cout << endl ;
        return 0 ;
}