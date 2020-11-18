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
    int n, m , countA = 0 ;
    cin >> m >> n ;
    
    vector<int> ans ;
    
    char arr[n][m] ;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> arr[i][j] ;
            if(arr[i][j] == 'A') countA++;
        }
        ans.push_back(countA) ;
        countA = 0 ;
    }
    countA = 0 ;
    for(int i = 1 ; i < ans.size(); i++)
    {
        countA += abs(ans[i] - ans[i -1]) ;
    }
    cout << countA + n << endl ;
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
