#include <bits/stdc++.h>
using namespace std ;
#define int long long

void solve ()
{
    int n ;
    cin >> n ;
    set<int> s ;
    for (int i = 0 ; i < n ; i++) {
        int x ;
        cin >> x ;
        s.insert(x) ;
    }
    int newSize = s.size();
    cout << ((n == newSize) ? "yEs\n" : "nO\n" ) ;
} 

int32_t main() 
{
    int testcases = 1 ;
    cin >> testcases ;
    while (testcases --) {
        solve() ;
    }
    return 0 ;
}