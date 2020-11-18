#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

bool isPrime(int n ) {
    //bool flag = true ;
    for (int i = 2 ; i <= sqrt(n) ; i++) {
        if(n % i == 0) return false ;
    }
    return true ;
}
bool isPalindrome(int num) {
    string a , b ;
    a = to_string(num) ;
    b = a ;
    reverse(b.begin(), b.end()) ;
    if(a == b) return true ;
    else return false ;
}

int PalinArray(int a[], int n)
{  
    for (int i = 0 ; i < n ; i++) {
        if (!(isPalindrome(a[i]))) return 0 ;
    }
    return 1 ;
}

void solve() {
    int n ;
    cin >> n ;
    int a[n] ;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i] ;
    }
    cout << PalinArray(a , n) << endl ;
}

int32_t main() {
	fast;
    int testcases ;
	cin >> testcases ;
	while(testcases--) {
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