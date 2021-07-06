// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    string s ;
    cin >> s ;
    int cnt = 0 ;
    for(int i = 0; i < s.size() ;)
    {
        if(s[i] =='x' and s[i+1] == 'y')
        {
            cnt++; i += 2 ;
        }
        else if(s[i] == 'y' and s[i+1] == 'x')
        {                
            cnt++ ; i += 2 ;
        }
        else i++ ;
        }
    cout << cnt << endl ;
}
    


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int testcases ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}