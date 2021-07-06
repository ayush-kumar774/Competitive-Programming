#include <bits/stdc++.h>
using namespace std ;
#define int long long

class Solution {
        public: 
        double mergeSortedArrays(vector<int>& nums1, vector<int>& nums2) 
        {
                int n = nums1.size() ;
                int m = nums2.size() ;
                vector<int> nums3(n + m) ;
                int k = 0 ;
                int i = 0 ;
                int j = 0 ;
                while(1) {
                        if (i == n or j == m) {
                                break ;
                        }
                        if (nums1[i] <= nums2[j]) {
                                nums3[k] = nums1[i] ;
                                i ++ ;
                                k ++ ;
                        }
                        else {
                                nums3[k] = nums2[j] ;
                                j ++ ;
                                k ++ ;
                        }
                }
                if (i != n) {
                        while (i < n)
                        {
                                nums3[k] = nums1[i] ;
                                i ++ ;
                                k ++ ;
                        }
                        
                }
                if (j != m) {
                        while (j < m)
                        {
                                nums3[k] = nums2[j] ;
                                j ++ ;
                                k ++ ;
                        }
                        
                }
                for (auto x : nums3) {
                        cout << x << " " ;
                }
                cout << endl ;
                return 8 ;
        } 
};

int32_t main()
{
        int n ;
        cin >> n ;
        int m ;
        cin >> m ;
        vector<int> nums1(n), nums2(m) ;
        for (auto &x : nums1) {
                cin >> x ;
        }
        for (auto &x : nums2) {
                cin >> x ;
        }
        Solution sol ;
        cout << sol.findMedianSortedArrays(nums1, nums2) << endl ;
        return 0 ;
}