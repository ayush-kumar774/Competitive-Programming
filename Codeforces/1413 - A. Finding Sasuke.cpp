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
        int n ;
        cin >> n ;
        vectorInt rooms(n) , ans ;
        for (auto &x : rooms) cin >> x ;
        for (int i = 0 ; i < n ; i += 2)
        {
                int LCM = (rooms[i] * rooms[i + 1]) / (__gcd(rooms[i], rooms[i  + 1])) ;
                ans.pb(LCM / rooms[i]) ;
                ans.pb(LCM / rooms[i  + 1]) ;
        }
        for (int i = 0 ; i < n ; i += 2) {
                if (ans[i] > 0 and ans[i + 1] > 0) ans[i] *= -1 ;
                else {
                        ans [i + 1] *= -1 ;
                }
        }
        for(auto x : ans) cout << x << " " ;
        cout << endl ;
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