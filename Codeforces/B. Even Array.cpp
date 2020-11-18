// https://codeforces.com/problemset/problem/1367/B
// In the name of Aadi Shakti 
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std ;
#define endl "\n"
#define int long long

void solve()
{
    int n;
    cin >> n; 
    int wrong = 0;
    int odd = 0, even = 0;
    vector<int> v(n);
                    
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
        if (i % 2 != v[i] % 2) 
        {
            wrong++;
            if (i % 2 && v[i] % 2 == 0) odd++;
            if (i % 2 == 0 && v[i] % 2) even++;
        }
    }
     
    if (wrong % 2) cout << -1 << endl;
    else 
    {
        if (odd == even) cout << wrong / 2 << endl;
        else cout << -1 << endl;
    }
}
int32_t main()
{
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0;
}