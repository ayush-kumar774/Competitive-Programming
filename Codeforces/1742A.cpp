#include <bits/stdc++.h>
using namespace std;

void solve2 () {
    vector<int> v(3) ;
    for (auto &x : v) cin >> x ;
    sort(v.begin(), v.end()) ;
    if (v[0] + v[1] == v[2]) cout << "YeS" << endl ;
    else cout << "nO" << endl ;
}

void solve () {
    int a, b, c ;
    cin >> a >> b >> c ;
    cout << ((a + b == c || a + c == b || b + c == a) ? "YeS\n" : "nO\n") ; 
}

int main() 
{
    int testcases = 1 ;
    cin >> testcases ;
    while (testcases--) {
        solve() ;
    }
    return 0 ;
}