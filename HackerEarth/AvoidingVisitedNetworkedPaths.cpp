// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n , m ;
    cin >> n >> m ;
    long long fav = 212072634227239451 ;
    long long arr[n][m] ;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> arr[i][j] ;
        }
    }
    long long cnt = 0 ;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(arr[i][j] % fav == 0) {
                cnt++;
                break ;
            }
        }    
    }
    cout << n - cnt << endl ;
}
