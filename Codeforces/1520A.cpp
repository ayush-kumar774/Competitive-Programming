#include <bits/stdc++.h>
using namespace std ;
#define ll long long

void solve() {
    int n ;
    cin >> n ;
    string str ;
    cin >> str ;
    
    for (char ch = 'A' ; ch <= 'Z' ; ch++) {
        int first = n ;
        int last = -1 ;

        for (int i = 0 ; i < n ; i++ ) {
            if (str[i] == ch) {
                first = min(first, i) ;
                last = max(last, i) ;
            }
        }

        for (int i = first ; i <= last ; i++) {
            if (str[i] != ch) {
                cout << "No\n" ;
                return ;
            }
        }
    }

    cout << "YeS\n" ;
}

int main() {
    ll testcases = 1 ;
    cin >> testcases ;
    while (testcases--)
    {
        solve() ;
    }
    
    return 0 ;
}