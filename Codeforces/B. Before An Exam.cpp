// https://codeforces.com/problemset/problem/4/B
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
    int d , sum , minSum = 0 , maxSum = 0;
    cin >> d >> sum ;
    int min[d], max[d] , mi = 0 ;
    for(int i = 0; i < d ; i++) 
    {
        cin >> min[i] >> max[i] ;
        maxSum += max[i] , minSum += min[i] ;
    }
    if(minSum <= d and d <= maxSum) {
        cout << "YES" << endl ;
        int di = sum - mi;
		int i = 0;
		while (i != d)
		{
			if (di == 0)
				cout << min[i] << " " ;
			else if (di <= max[i] - min[i])
			{
				cout << min[i] + di << " " ;
				di = 0;
			}
			else
			{
				cout << max[i] << " " ;
				di -= max[i] - min[i];
			}
			i++;
		}
    }
    else {
        cout << "NO" << endl ;
    }
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
