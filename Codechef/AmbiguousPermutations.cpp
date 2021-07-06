// https://www.codechef.com/problems/PERMUT2

// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl "\n"

int32_t main()
{
    fast ;
    while(1)
    {
        int n ;
        cin >> n ;
        if(n == 0) {
            return 0 ;
        }
        else{
                int arr[n] , arr2[n] ;
                for(auto &x : arr) cin >> x ;

                for (int i = 0; i < n; i++)  
                    arr2[arr[i] - 1] = i + 1 ; 

                string str = "" , str2 = "" ;

                for(int i = 0 ; i < n ; i++)
                {
                    str  += to_string(arr[i]) ;
                    str2 += to_string(arr2[i]) ;
                }

                if(str == str2) cout << "ambiguous" << endl ;
                else cout << "not ambiguous" << endl ;
        }
    }

    return 0 ;
}
