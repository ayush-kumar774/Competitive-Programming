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
#define vectorInt vector<int>
#define vectorStr vector<string>
#define vectorDo vector<double>
#define pb push_back
const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int LINF = 1e18;

string decimalToBinary(int n) 
{ 
        string s = bitset<64> (n).to_string(); 
        const auto loc1 = s.find('1'); 
        
        if(loc1 != string::npos) 
                return s.substr(loc1); 
        
        return "0"; 
} 

void solve()
{
        int n , k ; 
        cin >> n >> k ;
        vectorInt v(n) ;
        for (auto &x : v) cin >> x ;
        sort(all(v)) ;
        int ans = 0 ;
        for (int i = 1 ; i < n ; i++) {
                if ( ((k - v[i]) / v[0]) > 0 ) {
                        ans += ((k - v[i]) / v[0]) ;
                }
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
        cin >> testcases ;
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