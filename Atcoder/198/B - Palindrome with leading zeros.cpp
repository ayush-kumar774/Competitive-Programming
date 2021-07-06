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
#define mapInt map<int, int>
#define mapChar map<char, int>
#define mapStr map<string, int>
#define pb push_back
const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int LINF = 1e18;

bool isPalindrome(string s)
{
        for(int i = 0 ; i < sz(s) ; i++) {
                if (s[i] != s[sz(s) - 1 - i]) {
                        return false ;
                }
        }
        return true ;
}

void solve()
{
	string s ;
        cin >> s ;
        if(isPalindrome(s)) {
                cout << "Yes" << endl ;
        }
        else {
                string withoutZeroes = "" ;
                int lastIndex = -1 ;
                for (int i = sz(s) - 1 ; i >= 0; i--) {
                        if (s[i] != '0') {
                                lastIndex = i ;
                                break ;
                        }
                }
                for (int i = 0 ; i <= lastIndex ; i++) {
                        withoutZeroes += s[i] ;
                }
                if (isPalindrome(withoutZeroes)) {
                        cout << "Yes" << endl ;
                }
                else {
                        cout << "No" << endl ;
                }
        }
}

int32_t main()
{
        // #ifndef ONLINE_JUDGE
	//         freopen("input.txt", "r", stdin);
	//         freopen("output.txt", "w", stdout);
        // #endif
        fast ;
        int testcases = 1 ;
        //cin >> testcases ;
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
