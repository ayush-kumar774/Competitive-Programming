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
        int x , y ;
        int left = 0 ;
        int right = 0 ;
        int up = 0 ;
        int down = 0 ;
        int leftCount = 0 ;
        int rightCount = 0 ;
        int upCount = 0 ;
        int downCount = 0 ;
        string str ;

        cin >> x >> y ;
        cin >> str ;


        if(x > 0) right += x ;
        
        else left += abs(x) ;


        if(y > 0) up += y ;
        
        else down += abs(y) ;


        for (int i = 0 ; i < sz(str) ; i++)
        {
                if (str[i] == 'L') leftCount++ ;
                if (str[i] == 'R') rightCount++ ;
                if (str[i] == 'U') upCount++ ;
                if (str[i] == 'D') downCount++ ;
        }

        if (leftCount >= left and rightCount >= right and upCount >= up and downCount >= down)
        {
                cout << "YES" << endl ;
        }
        else
        {
                cout << "NO" << endl ;
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
