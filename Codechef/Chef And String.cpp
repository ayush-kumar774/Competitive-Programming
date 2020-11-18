
// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di 

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;


void solve() {
    int n ;
    int ans = 0 ;
    cin >> n ;
    int nums[n] ;
    for(int i = 0 ; i < n ; i++) cin >> nums[i] ;
    for(int i = 0 ; i < n - 1 ; i++) 
    {
        if(nums[i] > nums[i+1]) 
        {
            ans = ans + abs(nums[i] - (nums[i+1] + 1 )) ; 
        }
        else if(nums[i] < nums[i+1]) 
        {
            ans += abs(nums[i]+1 - nums[i + 1]) ;
        }
    }
    cout << ans << endl ;
}

int32_t main() {
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}