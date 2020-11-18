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
    char ch = '+';  // 43
    char ch1 = '-'; // 45
    char ch2 = '*'; // 42
    char ch3 = '/'; // 47
    int operation ;
    for(int i = 0 ; i < s.size() ; i++)
    {
        int a = s[i] ;
        if(a == 42 or a == 45 or a == 43 or a == 47) operation = a ;
    }
    string a = "" ;
    int index ;
    for(int i = 0 ; s[i] != ' ' ; i++)
    {
        a += s[i] ;
        index = i + 1 ;
    }
    string b = "" ;
    for(int i = index + 2 ; i < s.size(); i++)
    {
        b += s[i] ;
    }
    // cout << a << " " << b << endl ;
    int a1 = stoi(a) ;
    int b2 = stoi(b) ;
    if(operation == 42) cout << a1 * b2 << endl ;
    if(operation == 43) cout << a1 + b2 << endl ;
    if(operation == 45) cout << a1 - b2 << endl ;
    if(operation == 47) cout << a1 / b2 << endl ;
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
