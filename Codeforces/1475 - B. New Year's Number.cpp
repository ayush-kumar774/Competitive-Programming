#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast std::ios::sync_with_stdio(false) ; std::cin.tie(0) ; std::cout.tie(0) ;

void solve()
{
        int year ;
        cin >> year ;
        if (year % 2020 == 0 || year % 2021) cout << "YES" << endl ;   
        else
        {
                if(year % 2020 != 0)
                {
                        int rem = year % 2020 ;
                        int div = year / 2020 ;
                        if (rem > div) {
                                cout << "NO" << endl ;
                        }
                        else cout << "YES" << endl ;
                }
        }
}

int32_t main()
{
		fast ;
        int testcases = 1 ;
        cin >> testcases ;
        while(testcases--)
        {
                solve() ;
        }
        return 0 ;
}
