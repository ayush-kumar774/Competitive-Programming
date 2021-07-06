// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int countOne = 0 , n ;
    cin >> n ;
    while(n != 0)
    {
        n = n & (n - 1) ;
        countOne++ ;
    }
    //cout << countOne << endl; 

    int sum = 0 ;

    for(int i = 0; i < countOne; i++)
    {
        sum = sum + (pow(2,i)) ;
        //cout << sum << endl ;
    }

    //cout << "Final Sum " << sum << endl;
    cout << sum << endl ; 
}

int32_t main()
{
    int testcase  = 1 ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}