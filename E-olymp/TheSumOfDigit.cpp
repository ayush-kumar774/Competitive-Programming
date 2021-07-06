// https://www.e-olymp.com/en/problems/1603

// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

void solve()
{
    // cout << "Hello World!" << endl ;
    int number ;
    cin >> number ;
    int sum = 0  ;
    if (number < 0 ) {number *= -1 ;}
    while (number > 0) {
        sum += number % 10 ;
        number /= 10 ;
    }
    cout << sum << endl ;
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
    return 0 ;
}
