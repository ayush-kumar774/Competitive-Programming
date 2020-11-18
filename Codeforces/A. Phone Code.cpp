// https://codeforces.com/problemset/problem/172/A

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0) ;
#define endl '\n'
 
void solve()
{
    int n , counter = 0 , flag = 0 ;
    cin >> n ;
    string v[n] ;
    for(auto & x : v) cin >> x ;
    vector<int> ans ;
    for(int i = 0 ; i < n - 1; i++)
    {
        for(int j = 0 ; j < v[0].size(); j++)
        {
            if(v[0][0] != v[i + 1][0]) {
                flag = 1 ;
                break ;
            }
            if(v[0][j] == v[i + 1][j]){
                //cout << "Same elements are " << v[0][j] << " " << v[i + 1][j] << endl ; 
                counter++ ;
            }
            else{
                ans.push_back(counter) ;
                counter = 0 ;
                break ;
            }
        }
        if(flag == 1) break ;
    }
    // for(auto x: ans) cout << x << "  " ;
    // cout << endl ;
    if (flag == 1) cout << 0 << endl ;
    else
    {
        int answer = 999999 ;
        for(int i = 0 ; i < ans.size(); i++)
        {
            if(answer > ans[i]) answer = ans[i] ;
        }
        cout << answer << endl ;
    }
    
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