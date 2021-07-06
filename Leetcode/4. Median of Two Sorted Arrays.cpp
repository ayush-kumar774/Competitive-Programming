#include <bits/stdc++.h>
using namespace std ;
#define int long long

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
                int n = nums1.size() ;
                int m = nums2.size() ;
                if(n == 0 and m == 0) {
                    return (0/1.0) ;
                }
                if (n == 0) {
                        if (m == 1) {
                                return (nums2[0] / 1.0) ;
                        }
                }
                if (m == 0) {
                        if (n == 1) {
                                return (nums1[0] / 1.0) ;
                        }
                }
                int mid = ( ( n + m ) / 2 ) + 1 ;
                vector<int> nums3(n + m) ;
                int k = 0 ;
                int i = 0 ;
                int j = 0 ;
                cout << mid << endl;
                while(1) {
                        if (k == mid or i == n or j == m) {
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
                                if (k == mid) {
                                    break ;
                                }
                                nums3[k] = nums1[i] ;
                                i ++ ;
                                k ++ ;
                        }
                        
                }
                if (j != m) {
                        while (j < m)
                        {
                                if (k == mid) {
                                    break ;
                                }
                                nums3[k] = nums2[j];
                                [j] ;
                                j ++ ;
                                k ++ ;
                        }
                        
                }
                // for (auto x : nums3) {
                //         cout << x << " " ;
                // }
                if ( (n + m ) % 2 == 0 ) {
                        return ((nums3[mid - 1] + nums3[mid - 2]) / 2.0) ;
                }
                else {
                        return (nums3[mid - 1] / 1.0) ;
                }
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