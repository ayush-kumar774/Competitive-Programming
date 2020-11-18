// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long budget , n , m ;
    cin >> budget >> n >> m ;
    long long key[n] = {0} , usb[m] = {0} , sum{0} ,maxx{0} ;
    for(auto &x : key ) cin >> x ;
    for(auto &x : usb) cin >> x ;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            sum += (key[i] + usb[j]) ;
            if (sum <= budget)
            {
                if (maxx < sum)
                {
                    maxx = sum ;
                }
            }
            sum = 0 ;
        }
    }
    if (maxx) cout << maxx << endl ;
    else cout << -1 << endl ;
    return 0 ;
}