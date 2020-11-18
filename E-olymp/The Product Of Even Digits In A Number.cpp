// https://www.e-olymp.com/en/problems/1604

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
    int mul = 1 , cnt = 0 ;
    if (number < 0 ) {number *= -1 ;}
    string s = to_string(number) ;
    for (size_t i = 0; i < s.size(); i++)
    {            
        if( (s[i] - 48 )% 2 == 0) 
        {
            mul *= (s[i] - 48 ) ;
            cnt++ ;
        }
    }
    
    if(cnt == 0) cout << -1 << endl ;
    cout << mul << endl ;
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