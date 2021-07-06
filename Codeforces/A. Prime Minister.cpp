// https://codeforces.com/problemset/problem/1178/A
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl '\n'

void solve() {
    vector<int> freq(101, -1) ;
    int n , sum = 0 ; 
    cin >> n ;
    vector <int> v (n) ;
    for (auto &x : v) {
        cin >> x ;
        sum += x ;
    }
    if ( ((sum / 2) + 1 ) <= v[0] ) {
        cout << 1 << endl << 1 << endl ;
    }
    else {
        int sum2 = v[0] , count = 0 ;
        vector<int> index ;
        index.push_back(1) ;
        for (int i = 1 ; i < n; i++) {
            if (v[i] <= ( v[0] / 2 )) {
                sum2 += v[i] ;
                index.push_back(i + 1) ;
            }   
            else {
                count++ ;
            }
        }
        //cout << sum2 << endl ;
        if ( ((sum / 2) + 1 ) <= sum2 ) { 
            if (count == 0 ) 
            {
                int nn = index.size() ;
                cout << nn - 1 << endl ; 
                for (int i = 0 ; i < nn - 1 ; i++) {
                    cout << index[i] << " " ;
                }
            }
            else {
                cout << index.size() << endl ;
                for (auto &x : index) cout << x << " " ;
            }
        }
        else cout << 0 << endl ;
    }
}

int32_t main()
{
    fast ;
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