#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
        string str ;
        getline(cin >> ws  , str) ;
	int n = str.length();
        if(n < 5) {
        cout << "OMG>.< I don't know!" << endl;
         	return;
        }
        else if (str.substr(0, 5) == ("miao.") && str.substr(n - 5, n) == ("lala."))
                cout << "OMG>.< I don't know!" << endl;
        else if (str.substr(0, 5) == ("miao."))
                cout << "Rainbow's" << endl;
        else if (str.substr(n - 5, n) == ("lala."))
                cout << "Freda's" << endl;
        else {
                cout << "OMG>.< I don't know!" << endl;
        }
}


int32_t main () {
        fast;
        int testcases = 1 ;
        cin >> testcases ;
        while(testcases--) {
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

