#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int nums[600] = {0}, maxx = 0 , min = 600 , ans = 0 ;
        
        for(int i = 0 ; i < arr.size(); i++) {
            nums[arr[i]]++ ;
            if( maxx < arr[i] ) maxx = arr[i] ;
            if( min > arr[i] ) min = arr[i] ;
        }  
        
        //cout << max << " " << min << endl ;
        
        for(int i = min ; i <= maxx ; i++)
        {
            if(nums[i] == i) {
                ans = i ;
                ans = max(ans, i) ;
            }
        }

        if(ans == 0 ) return -1 ;
        else return ans ;
    }
};


int main()
{
    int n ;
    cin >> n ;
    
    vector<int> arr(n) ;
    for(auto &x : arr) cin >> x ;

    Solution s ;
    cout << s.findLucky(arr) << endl ;
    return 0 ;
}