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
	int k;
	string a;
	cin >> k >> a;
	int n = a.size();
	vector<int> v;
        map<char, int> m ;
	for (int i = 0; i < n; i++) {
		if (m.find(a[i]) == m.end()) {
			m[a[i]] = true;
			v.push_back(i);
		}
	}
	if ((int)v.size() < k) {
		cout << "NO" << endl;
		return ;
	}
	cout << "YES" << endl;
	while (v.size() > k) {
		v.pop_back();
	}
	v.push_back(n);
	for (int i = 0; i < k; i++) {
		for (int j = v[i]; j < v[i + 1]; j++) {
			cout << a[j];
		}
		cout << endl;
	}
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
