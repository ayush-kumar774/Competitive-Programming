// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int p , q, r, a, b , c ;
    cin >> p >> q >> r >> a >> b >> c ;
    while(p <= a and q <= b and r <= c) 
    {
        int arr[3] ;
        arr[0] = a - p ;
        arr[1] = b - q ;
        arr[2] = c - r ;
        
        int *m = min_element(arr, arr + 3) ;
        int min = *(m) ;
        if(m == 0)
        {

        }
        else{
            p += min ;
            q += min ;
            r += min ;
        }
    }
}

int32_t main()
{
    fast ;
    int testcases ;
    cin >> testcases ;
    while(testcases--)
    {
        solve();     
    }
   
}