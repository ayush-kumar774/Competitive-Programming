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
    int n , input, cnt = 0 , sum = 0  ;
    cin >> n ;
    //vector<int> ans ; 
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> input ;
            if(input % 2 == 0 and input < 0)
            //ans.push_back(input) ;
            {
                cnt++ ;
                sum += input ;
            }
        }
    }
    // cout << ans.size() << endl ;
    // for(auto x : ans) cout << x << " " ;
    // cout << endl ;
    cout << cnt << " " << sum << endl ;
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
