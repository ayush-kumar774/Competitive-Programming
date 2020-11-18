#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0 ;
        for(int i = 0 ; i < arr1.size() ; i++) {
            for(int j = 0 ; j < arr2.size() ; j++) {
                int diff = abs( arr1[i] - arr2[j] ) ;
                if(diff <= d ) {
                    ans++ ;
                    break ;
                }
            }
        }
        ans = arr1.size() - ans ;
        return ans ;
    }
};

int main() {
    int n , m ;
    cin >> n >> m ;

    vector<int> arr1(n) , arr2(m) ;

    for(auto &x : arr1) cin >> x ;
    for(auto &x : arr2) cin >> x ;

    int d ;
    cin >> d ;

    Solution s ;
    cout << s.findTheDistanceValue(arr1, arr2, d) << endl ;
    return 0 ;
}