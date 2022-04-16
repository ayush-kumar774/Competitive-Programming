// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast                              \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);
#define endl '\n'
#define sz(v) ((int)((v).size()))
#define all(v) ((v).begin()), ((v).end())
#define allr(v) ((v).rbegin()), ((v).rend())
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
        int row, column, r , c ;
        cin >> row >> column >> r >> c ;
        char mat[row][column] ;
        vector<int> rowIndex ;
        vector<int> columnIndex ;
        bool impossible = true ;
        for (int i = 0 ; i < row ; i++) 
        {
                for (int j = 0 ; j < column ; j++)
                {
                        cin >> mat[i][j] ;
                        if (mat[i][j] == 'B') 
                        {
                                impossible = false ;
                        }
                }
        } 
        if (impossible)
        {
                cout << -1 << endl ;
        }
        else 
        {
                if (mat[r - 1] [c - 1] == 'B') 
                {
                        cout << 0 << endl ;
                }
                else 
                {
                        bool found = false;
                        for (int i = 0 ; i < row ; i++)
                        {
                                if (mat[i][c-1] == 'B')
                                {
                                        found = true ;
                                        break ;
                                }
                        }
                        for (int i = 0 ; i < column ; i++)
                        {
                                if (mat[r - 1][i] == 'B')
                                {
                                        found = true ;
                                        break ;
                                }
                        }
                        if (found) {
                                cout << 1 << endl ;
                        }
                        else {
                                cout << 2 << endl ;
                        }
                }

        }
}

int32_t main()
{
        // #ifndef ONLINE_JUDGE
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif
        fast;
        int testcases = 1;
        cin >> testcases;
        while (testcases--)
        {
                solve();
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
