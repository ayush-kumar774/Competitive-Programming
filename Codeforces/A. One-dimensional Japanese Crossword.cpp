// https://codeforces.com/problemset/problem/732/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n;
	string s;
	cin >> n >> s;
	int counter = 0, freq[110] = {0};
	for(int i = 0 ; i < n ; i++)
	{
		if(s[i] == 'B' && s[ i - 1] != 'B')
		{
			counter++ ;
		}
		if(s[i] == 'B')
		{
			freq[counter] ++;
		}
	}
	cout << counter << endl;
	for( int i = 1 ; i <= counter ; i++)
	{
		cout << freq[i] <<" ";
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
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/