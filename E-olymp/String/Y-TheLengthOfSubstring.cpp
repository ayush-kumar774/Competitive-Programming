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
    string s ;
    getline(cin, s) ;
    int index1 , index2 ;
    cin >> index1 >> index2 ;
    cout << index2 - (index1 - 1) << endl ;
    for(int i = index1 - 1 ; i < index2; i++)
    {
        cout << s[i] ;
    }
    cout << endl ;
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
