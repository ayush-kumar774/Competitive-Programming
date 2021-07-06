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
    int n , k ;
    cin >> n >> k ;
    int arr[n] = {0} ;
    for(auto &x : arr) cin >> x ;
    int counter = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            //if(arr[i] + arr[j] % k == 0 ) counter ++ ;
            //cout << arr[i] << " " << arr[j] << " ";
            int sum = arr[i] + arr[j] ;
            //cout << sum << " " ;
            if(sum % k == 0){
                counter++;
            } 
        }
        //cout << endl ;
    }
    cout << counter << endl ;
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
