// https://codeforces.com/problemset/problem/157/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl"\n"

     
     
int rowSum(int r, int n, vector<vector<int>> &v) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[r][i];
    }
    return sum;
}
     
int colSum(int c, int n, vector<vector<int>> &v) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i][c];
    }
    return sum;
}
     
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 1));   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (colSum(j, n, v) > rowSum(i, n, v)) {
                count++;
            }
        }
    }
    cout << count << endl;  
}

int32_t main() {
    fast ;
    int testcases = 1;
    //cin >> testcases;
     
    while(testcases--) {
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