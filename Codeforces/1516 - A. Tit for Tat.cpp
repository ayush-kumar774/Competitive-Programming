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


void solve()
{
	int n , k ;
        cin >> n >> k ;
        int arr[n] ;
        int maxOperation = 0 ;
        for(int i = 0 ; i < n ; i++) {
                cin >> arr[i] ;
                maxOperation += arr[i] ;
        }
        maxOperation -= arr[n- 1] ;
        int lastElement = arr[n - 1] ;
        maxOperation = min(maxOperation, k) ;
        // cout << maxOperation << endl ;
        for (int i = 0 ; i < n - 1 ; i++) {
                if (maxOperation == 0) {
                        break ;
                }
                if (arr[i] != 0) {
                        if (maxOperation >= arr[i]) {
                                lastElement = arr[i] + lastElement ;
                                maxOperation -= arr[i] ;
                                arr[i] = 0 ;
                                // cout << "Max operation when greater " << maxOperation << endl ;
                        }
                        else {
                                lastElement = maxOperation + lastElement ;
                                arr[i] -= maxOperation ;
                                maxOperation = 0 ;
                                // cout << "Max operation when smaller " << maxOperation << endl ;
                        }
                }
        }
        for (int i = 0 ; i < n - 1 ; i++) {
                cout << arr[i] << " " ;
        }
        cout << lastElement << endl ;
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
