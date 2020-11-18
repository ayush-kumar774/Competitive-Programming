#include <bits/stdc++.h>
using namespace std ;

void solve () 
{
    int n ;
    cin >> n ;
    vector<int> q(n) ;
    for(auto &x : q) cin >> x ; 
    int ans = 0;
    for (int i = q.size() - 1; i >= 0; i--) {
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, q[i] - 2); j < i; j++)
            if (q[j] > q[i]) ans++;
    }
    cout << ans << endl;
}

int main() {
    int testcases = 1 ;
    cin >> testcases ;
    while (testcases--)
    {
        solve() ;
    }
    
}