// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define sz(v)	( (int) ( (v).size() ) )
#define all(v)	( (v).begin() ) , ( (v).end() )
#define allr(v)	( (v).rbegin() ) , ((v).rend())
#define mod 1e9 + 7
#define print(x) cout << x << endl ;

void solve()
{
        map<int , int> mp ;
        mp.insert({0, 6}) ;    
        mp.insert({1, 2}) ;    
        mp.insert({2, 5}) ;    
        mp.insert({3, 5}) ;    
        mp.insert({4, 4}) ;    
        mp.insert({5, 5}) ;    
        mp.insert({6, 6}) ;    
        mp.insert({7, 3}) ;    
        mp.insert({8, 7}) ;    
        mp.insert({8, 6}) ;    
        
        string s ;
        cin >> s ;
        int ans = 0 ;
        for (int i = 0 ; i < s.size() ; i++) {
                ans += mp[s - '0'] ;
        }
        cout << ans << endl ;
}

int32_t main()
{
        // #ifndef ONLINE_JUDGE
	//         freopen("input.txt", "r", stdin);
	//         freopen("output.txt", "w", stdout);
        // #endif
        fast ;
        int testcases = 1 ;
        while(testcases--)
        {
                solve() ;
        }
        return 0;
}
/*  CODED BY:-
         ___________________________________
        |                       ___         |
        |  /\   /\  \ /  |  |  |___   |__|  |
        | /~~\ /~~\  |   |__|   ___|  |  |  |
        |___________________________________|
*/

