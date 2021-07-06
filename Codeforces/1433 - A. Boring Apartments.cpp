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

int numberOfDigits(int num)
{
        return (floor(log10(num)) + 1) ;
}

void solve()
{
        vector<int> v ;
        for (int i = 1 ; i <= 9 ; i++)
        {
                string str = "" ;
                for (int j = 1 ; j <= 4 ; j++)
                {
                        str += to_string(i);
                        v.push_back(stoi(str)) ;
                }
        }
        int n ;
        cin >> n ;
        int i = 0 , ans = numberOfDigits(n);
        while(n != v[i]) {
                ans += numberOfDigits(v[i]) ;
                i++ ;
        }
        cout << ans << endl ; 
}

int32_t main()
{
        #ifndef ONLINE_JUDGE
	        freopen("input.txt", "r", stdin);
	        freopen("output.txt", "w", stdout);
        #endif
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