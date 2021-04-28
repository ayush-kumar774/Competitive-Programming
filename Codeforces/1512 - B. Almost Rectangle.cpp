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
#define read(n) cin >> n 
const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int LINF = 1e18;


void solve()
{
	int n ;
        read(n) ;
        char mat[n][n] ;
        bool sameColumn = false ;
        bool sameRow = false ;
        int row[2], column[2];
        int k = 0 ;
        for (int i = 0 ; i < n  ; i++) {
                for (int j = 0 ; j < n ; j++) {
                        read(mat[i][j]) ;
                        if (mat[i][j] == '*') {
                                if (k < 2)
                                {
                                        row[k] =  i ;
                                        column[k] = j ;
                                }
                                k++ ;
                        }
                }
        }
        if (row[0] == row[1]) sameRow = true ;
        if (column[0] == column[1]) sameColumn = true ;
        if (sameRow) {
                if (row[1] + 1 < n) {
                        mat[row[1] + 1][column[0]] = '*' ;
                        mat[row[1] + 1][column[1]] = '*' ;
                }
                else {
                        mat[row[1] - 1][column[0]] = '*' ;
                        mat[row[1] - 1][column[1]] = '*' ;
                }
                for (int i = 0 ; i < n ; i++) {
                        for (int j = 0 ; j < n ; j++) {
                                cout << mat[i][j];
                        }
                        cout << endl ;
                }
        }
        else if (sameColumn) {
                if (column[1] + 1 < n) {
                        mat[row[0]][column[0] + 1] = '*' ;
                        mat[row[1]][column[1] + 1] = '*' ;
                }
                else {
                        mat[row[0]][column[0] - 1] = '*' ;
                        mat[row[1]][column[1] - 1] = '*' ;
                }
                for (int i = 0 ; i < n ; i++) {
                        for (int j = 0 ; j < n ; j++) {
                                cout << mat[i][j];
                        }
                        cout << endl ;
                }
        }
        else {
                mat[row[0]][column[1]] = '*' ;
                mat[row[1]][column[0]] = '*' ;
                for (int i = 0 ; i < n ; i++) {
                        for (int j = 0 ; j < n ; j++) {
                                cout << mat[i][j];
                        }
                        cout << endl ;
                }        
        }
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
