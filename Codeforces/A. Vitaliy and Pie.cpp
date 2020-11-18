// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

void solve()
{
	int n ;
        string s ;
        cin >> n >> s;
	map<char,int> m ;
        int ans = 0;
	for (int i = 0; i < 2 * n - 2; i++) {
		if (i % 2 == 0) {
			m[s[i]]++;
		} else {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				char c = s[i] - 'A' + 'a';
				if (m[c] == 0) {
					ans++;
				} else {
					m[c]--;
				}
			} else {
				char c = s[i] - 'a' + 'A';
				if (m[c] == 0) {
					ans++;
				} else {
					m[c]--;
				}
			}
		}
	}
	cout << ans << endl;
}

int32_t main()
{
        fast ;
        int testcases = 1 ;
        //cin >> testcases ;
        while(testcases--)
        {
                solve() ;
        }
        return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 */
