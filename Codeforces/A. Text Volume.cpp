// https://codeforces.com/problemset/problem/837/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int counter = 0 ;
    string a , b ;
    getline(cin , a) ;
    getline(cin , b) ;
    vector<int> ans ;
    for(int i = 0 ; i < b.size() ; i++) {
        if (b[i] >= 65 and b[i] <= 90){
            counter++ ;
        }
        if (b[i] == ' ' or i == b.size() - 1) {
            ans.push_back(counter) ;
            counter = 0 ;
        }
    }
    int m = *max_element(ans.begin(), ans.end()) ;
    cout << m << endl ;
}

int32_t main()
{
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/