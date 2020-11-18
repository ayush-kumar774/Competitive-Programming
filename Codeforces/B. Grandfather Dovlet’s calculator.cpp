// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di 

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

int sumofDigit (int n) {
    int sum = 0 ;
    //int zero = 6 , one = 2 , two = 5 , three = 5 , four = 4, five = 5 , six = 6 , seven = 3 , eight = 7, nine = 6 ;
    string s = to_string(n) ;
    for(int i = 0 ; i < s.size(); i++) {
        if(s[i] == '0') {
            sum += 6 ;
        }
        else if(s[i] == '1') {
            sum += 2 ;
        }
        else if(s[i] == '2') {
            sum += 5 ;
        }
        else if(s[i] == '3') {
            sum += 5 ;
        }
        else if(s[i] == '4') {
            sum += 4 ;
        }
        else if(s[i] == '5') {
            sum += 5 ;
        }
        else if(s[i] == '6') {
            sum += 6 ;
        }
        else if(s[i] == '7') {
            sum += 3 ;
        }
        else if(s[i] == '8') {
            sum += 7 ;
        }
        else if(s[i] == '9') {
            sum += 6 ;
        }
    }  
    return sum ;
}

void solve() {
    int start , target ;
    cin >> start >> target ;
    int ans = 0 ;
    for(int i = start ; i <= target ; i++) {
        // ans += ans + sumofDigit(i);
        //cout << sumofDigit(i) << endl ;
        int a = sumofDigit(i) ;
        ans += a ;
    }
    cout << ans << endl ;
}

int32_t main() {
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}