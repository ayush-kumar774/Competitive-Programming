// In the name of Aadi Shakti

#include <bits/stdc++.h>
#define int long long
#define fast std::ios_base::sync_with_stdio(false); std::cin.tie(0) ; std::cout.tie(0) ;
using namespace std;
int32_t main()
{
    fast;
    int sum ;
    cin >> sum ;
    int step = 3 ;
    while(step--)
    {
        int a ;
        cin >> a ;
        sum -= a ;
    }
    cout << sum << endl ;
    return 0 ;
}