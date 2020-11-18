#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size() ;
        bool present[n + 1] ;
        for(int i = 0 ; i < n + 1 ; i++) {
            present[i] = false ;
        }  
	    for (int i = 0; i < n; i++) {
		    if (nums[i] > 0 && nums[i] <= n) 
			    present[nums[i]] = true; 
	    }  
	    for (int i = 1; i <= n; i++) {
		    if (!present[i]) 
			    return i; 
        }
	    return n + 1;
    }
};

int main() {
    int n ;
    cin >> n;

    vector<int> arr1(n) ;

    for(auto &x : arr1) cin >> x ;

    Solution s ;
    cout << s.firstMissingPositive(arr1) << endl ;
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/