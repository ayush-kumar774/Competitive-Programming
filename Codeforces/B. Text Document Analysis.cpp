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
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        vector <int> inside  ;
        vector <int> outside ;
        vector <int> start ;
        vector <int> end ;
        int counter = 0 ;
        for (int i = 0 ; i < n ; i++) {
        	if (s[i] == '(') 
        		start.push_back(i);
                if (s[i] != '_' and s[i] != ')') counter++ ;
                else if (s[i] == '_' or s[i] == ')') {
                        inside.push_back(counter);
                        counter = 0 ;
                }
                if (s[i] == ')') {
                        end.push_back(i) ;
                }	
        }
        counter = 0 ;
        int j = 0 ; 
        for (int i = 0 ; i < n ; i++) {
                if (i == start[j]) {
                        i = end[j] + 1 ;
                        j++ ;
                }
                if (i >= n) break ;
                if(s[i] != '_') counter++ ;
                else if (s[i] == '_' or i == n - 1) {
                        outside.push_back(counter) ;
                        counter = 0 ;
                }

        }
        cout << *max_element(all(outside)) << " " << inside.size() << endl ;
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