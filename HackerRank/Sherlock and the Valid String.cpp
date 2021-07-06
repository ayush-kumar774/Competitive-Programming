#include <bits/stdc++.h>
using namespace std ;
#define endl "\n"

void solve() {
    vector<int> arr(26, 0) ;
    string s ;
    cin >> s ;
    int maxx = 0 , n = s.size() ;
    for(int i = 0 ; i < n ; i++) {
        arr[s[i] - 97]++ ;
        if(maxx < s[i]) {
            maxx = s[i] ;
        }
    }
    maxx -= 97 ;

    int ele = arr[0] ;
    
    vector<int> diff ;
    
    for(int i = 1 ; i <= maxx; i++){
        if(arr[i] != ele)
        {
            diff.push_back(abs(arr[i] - ele)) ;
        }
    }

    //for(auto x : diff) cout << x << endl ;
    if(diff.size() == 1 and diff[0] == 1) cout << "YES" << endl ;
    else if(diff.size() == 0) cout << "YES" << endl ; 
    else cout << "NO" << endl ;
}

int32_t main () 
{
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
}