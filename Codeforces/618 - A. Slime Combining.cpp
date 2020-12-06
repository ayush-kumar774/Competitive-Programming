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
#define vector (vector<int>)
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
        string ans = decimalToBinary(n) ;
        reverse(all(ans)) ;
        vector<int> res ;
        for (int i = 0 ; i < sz(ans) ; i++)
        {
                if (ans[i] == '1') 
                        res.push_back(i + 1);
        }
        reverse(all(res)) ;
        for(auto x : res) cout << x << " " ;
        cout << endl ;
}

int32_t main()
{
        #ifndef ONLINE_JUDGE
	        freopen("input.txt", "r", stdin);
	        freopen("output.txt", "w", stdout);
        #endif
        fast ;
        int testcases = 1 ;
        // cin >> testcases ;
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