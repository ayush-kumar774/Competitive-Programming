#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
        {
                vector<int> ans ;
                int s = min(m , n) ;
                int i = 0 , j = 0 ;
                while (true)
                {
                        //cout << "Running" << endl ;
                        if (i == m or j == n) {
                                break ;
                        }
                
                        if (nums1[i] <= nums2[j]) {
                                ans.push_back(nums1[i]) ;
                                i++ ;
                        }
                        else if (nums2[j] <= nums1[i]) {
                                ans.push_back(nums2[j]) ;
                                j++ ;
                        }
                }
                while (i < m)
                {
                        ans.push_back(nums1[i]) ;
                        i++ ;
                }
                while (j < n)
                {
                        ans.push_back(nums2[j]) ;
                        j++ ;
                }
                
               nums1.clear() ;
               for (auto x : ans) {
                       nums1.push_back(x) ;
               }
                
        }
        void mergeBetter(vector<int>& nums1, int m, vector<int>& nums2, int n) 
        {
                if(n!=0&&m==0)
        {
            nums1=nums2;
        }
        
        if(n!=0&&m!=0)
    {
        int i=m-1;
            
            
        for(int j=n+m-1;j>=n;j--)
        {
            swap(nums1[i],nums1[j]);
            i--;
        }

        i=0;
int j=n,k=0;
            
        while(i<n+m)
        {
            if(k<n&&j<n+m&&nums1[j]<=nums2[k])
            {
               nums1[i]=nums1[j];
                j++;
            }
            else if(k<n)
            {
                nums1[i]=nums2[k];
                k++;
            }
            i++;
        }
       
     }
        }
};

int main()
{
        int m , n ; 
        
        cin >> m >> n ;
        
        vector<int> nums1(m + n) , nums2(n) ;
        
        for (auto &x : nums1) {
                cin >> x ;
        }
        
        for (auto &x : nums2) {
                cin >> x ;
        }

        Solution sol ;
        sol.merge(nums1, m , nums2, n) ;

        cout << "After Merging " << endl ;
        for (auto x : nums1) {
                cout << x << " " ;
        }
        cout << endl ;
        
        return 0 ;
}