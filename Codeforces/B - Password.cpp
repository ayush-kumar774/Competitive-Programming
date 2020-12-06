// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define all(x) (x).begin() , (x).end()

bool compare(string &s1 , string &s2) {
	return s1.size() < s2.size() ;
}

void solve()
{
        int n , k ;
       	cin >> n >> k ;
       	vector <string> pass(n) ;
       	for (auto &x : pass) cin >> x ;
       	string password ;
       	cin >> password ;
       	int passwordLength = (int)password.size() ;
       	sort(all(pass), compare);
       	int countSmaller = 0 , countEqual = 0 ;
       	for(int i = 0 ; i < n ; i++) {
       		if (pass[i].size() == passwordLength) countEqual++ ;
       		if (pass[i].size() < passwordLength) countSmaller++ ;
       	}
       	countEqual += countSmaller ;
       	cout << ( countSmaller + ( ( countSmaller / k ) * 5 ) + 1 ) << " " << ( countEqual + ((countEqual - 1) / k * 5 )) << endl ;
}

int32_t main()
{
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