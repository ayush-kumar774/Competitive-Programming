#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

bool sumOfDigit(int n , int b) {
        int sum = 0 ;
        while(n > 0) {
                sum += n % 10 ;
                n /= 10 ;
        }
        //cout << sum << endl ;
        if (sum <= b ) return true ;
        else return false ;
}

void solve() {
        int n , s; 
        cin >> n  >> s ;
        bool is = sumOfDigit(n, s);
        if (is) {
                cout << 0 << endl ;
                return ;
        } 
        int ans = 0 ;
        long long pw = 1;
        for (int i = 0; i < 18; ++i) {
                int digit = (n / pw) % 10;
                long long add = pw * ((10 - digit) % 10);
                n += add;
                ans += add;
                if (sumOfDigit(n, s)) {
                        break;
                }
                pw *= 10;
        }
	cout << ans << endl;
}
int32_t main() {
    fast;
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}