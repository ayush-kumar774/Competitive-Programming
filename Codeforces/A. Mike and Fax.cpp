#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define all(x)  (x).begin() , (x).end() 

bool isPalindrome(string s) {
        string t = s ;
        reverse(t.begin() , t.end()) ;
        if (s == t) return true ;
        else return false ;
}

void solve()
{
        string s ;
        int n , size ;
        cin >> s >> n ;
        size = s.size() ;
        int k = size / n ;
        if (size % n != 0) {
                cout << "NO" << endl ;
        }
        else {
                for (int i = 0 ; i < size ; i += k) {
                        if(!(isPalindrome(s.substr(i, k)))) {
                                cout << "NO";
                                return ;
                        }
                }
                cout << "YES" << endl ;
        }
}

int32_t main()
{
        fast ;
        int testcases = 1;
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