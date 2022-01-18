#include<bits/stdc++.h>
using namespace std ;
#define int long long

void solve()
{
        double quantity, price ;
        cin >> quantity >> price ;
        if((int)quantity > 1000)
        {
                cout << ((quantity * price) - ((quantity * price * 10) / 100.0)) << endl ; 
        }
        else 
        cout << (quantity * price) << endl ;
}

int32_t main()
{
        int testcases = 1 ;
        cin >> testcases ;
        while (testcases--)
        {
                solve();
        }
        
        return 0 ;
}