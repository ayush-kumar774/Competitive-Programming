#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast std::ios::sync_with_stdio(false) ; std::cin.tie(0) ; std::cout.tie(0) ;

void solve()
{
        int n ;
        cin >> n ;
        if ( (int)(ceil(log2(n))) == (int)(floor(log2(n))) ) {
                cout << "NO" << endl ;
        }
        else
        {
                cout << "YES" << endl ;
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
