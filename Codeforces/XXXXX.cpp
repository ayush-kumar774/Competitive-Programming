//https://codeforces.com/problemset/problem/451/A

// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n, x ;
    cin >> n >> x ;
    int arr[n] , sum {0} ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
        sum += arr[i] ;
        
    }
    int countZero = count(arr, arr + n , 0) ;

    //sort(arr, arr + n) ;
    //cout << "No. of zero " << countZero << endl ;
    
    int summ = sum ; 
    
    //if(countZero == n - 1 )cout  << "-1" << endl ;
    //else
    
    if(sum % x != 0)
    {
        cout << n << endl ;
    }
    else if(sum % x == 0)
    {
        int j = 0 , k = n - 1, cnt = 0;
        while(sum % x == 0 and j < n)
        {
            sum -= arr[j] ;
            j++ ;
        }
        
        while(summ % x == 0 and k >= 0)
        {
            summ -= arr[k] ;
            cnt++ ;
            k-- ;
        }
        
        if(j == n and k == 0) cout << "-1" << endl; 
        
        // cout << "Hello" << endl ;
        
        else {
            if(n - min(j, cnt) == 0)
            cout << -1 << endl ;
            else cout << n - min(j, cnt) << endl ;
        } 
    }

}

int32_t main()
{
    fast;
    int testcase  = 1 ;
    cin >> testcase ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}