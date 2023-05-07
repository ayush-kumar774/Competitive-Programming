#include <bits/stdc++.h>
using namespace std ;
#define int long long

void solve() {
    char ch ;
    cin >> ch ;
    if (ch == 'c' or ch == 'o' or ch == 'd' or ch == 'e' or ch == 'f' or ch == 'o' or ch == 'r' or ch == 'c' or ch == 'e' or ch == 's') cout <<"yES\n" ;
    else cout << "nO\n" ;
}

int32_t main() {
    int testcases = 1 ;
    cin >> testcases ;
    while (testcases--) {
        solve();
    }
    return 0 ;
}