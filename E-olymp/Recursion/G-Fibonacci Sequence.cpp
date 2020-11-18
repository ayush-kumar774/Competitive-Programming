// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di 

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

int fib(int n) {
    if(n == 0) {
        return 0 ;
    }
    else if(n == 1) {
        return 1 ;
    }
    else {
        return fib(n - 1) + fib( n - 2) ; 
    }
}

void solve() {
    int n ;
    cin >> n ;
    cout << fib(n) << endl ;
}

int32_t main() {
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}