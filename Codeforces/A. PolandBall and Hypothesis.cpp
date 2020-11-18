// https://codeforces.com/problemset/problem/755/A

// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl "\n"

bool isPrime (int n ) {
    if(n == 2 or n == 3) return true;
    else if( (n - 1) % 6 == 0 or (n + 1) % 6 == 0) return true;
    else return false;
}

void solve()
{
    int n ;
    cin >> n ;
    for(int i = 1 ; i < 10000 ; i++) {
        if( !isPrime( (n * i) + 1 ) ) {
            cout << i << endl ;
            break ;
        }
    }
}

void newSolution() {
    int n ;
    cin >> n ;
    if(n == 1 ) cout << 3 << endl ;
    else if(n == 2) cout << 4 << endl ;
    else {
        cout << n - 2 << endl ;
    }
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ; // Wrong Answer Format on testcase 9
        //newSolution() ;
    }
    return 0 ;
}
