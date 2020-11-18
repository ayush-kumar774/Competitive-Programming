// https://codeforces.com/contest/988/problem/B
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

bool compare(string &s1,string &s2) 
{ 
    return s1.size() < s2.size(); 
} 

void solve() {
    int n ;
    cin >> n ;
    vector<string> s(n) ;
    for (auto &x : s) cin >> x ;
    sort(s.begin() , s.end(), compare) ;
    //for (auto x : s) cout << x << endl ;
    bool flag = false ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = i + 1 ; j < n ; j++) {
            size_t found = s[j].find(s[i]) ;
            if (found == std::string::npos) {
                flag = true ;
                break ;
            }
        }
        if (flag) break ;
    }
    if (flag) cout << "NO" << endl ;
    else {
        cout << "YES" << endl ;
        for (auto x : s) cout << x << endl ;
    }
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0  ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/