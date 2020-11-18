// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di 

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

int sumOfDigits (int n) {
    int sum = 0 ;
    while(n > 0) {
        sum += n % 10 ;
        n /= 10 ;
    }
    return sum ;
}

void solve() {
    int n ;
    cin >> n ;
    int chef = 0 , tie = 0 , morty = 0 ;
    while (n--) {
        int a , b ;
        cin >> a >> b ;
        int c = sumOfDigits(a) ;
        int d = sumOfDigits(b) ;
        if(c == d) tie ++ ;
        else if(c < d) morty ++ ;
        else if(c > d) chef ++ ;
    }
    if (morty > chef) {
        cout << 1 << " " << morty << endl ; 
    }
    else if (morty == chef) {
        cout << 2 << " " << morty << endl ;
    }
    else if (morty < chef) {
        cout << 0 << " " << chef - morty << endl ;
    }
}

int32_t main() {
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}