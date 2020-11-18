// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int ts , cnt{0};
        cin >> ts ;
        if(ts % 2 == 0)
        {
            while(ts % 2 != 1)
            {
                ts = ts / 2 ;
            }    
        } 
        for(int i = 2 ; i <= ts ; i += 2)
        {
            cnt++ ;
        }
        cout << cnt << endl;
}

int32_t main()
{
    fast ;
    int testcases ;
    cin >> testcases ;
    while(testcases--)
    {
        solve();     
    }
   
}