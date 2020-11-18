// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di 

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

int exponetiation(int a, int b) {
    if(b == 0) {
        return 1 ;
    }
    else {
        return a * exponetiation(a, b - 1) ;
    }
}

void solve() {
    int a , b ;
    cin >> a >> b ;
    cout << exponetiation(a,b) << endl ;
}

int32_t main() {
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}