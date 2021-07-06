// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n ;
    cin >> n ;
    int arr[n] ;
    int count5{1} , count10{0};
    for( int i = 0 ; i < n ; i++ )  cin >> arr[i] ;
    if(arr[0] > 5) cout << "NO\n" ;
    else
    {
        int flag = 0 ;
        for(int i = 1 ; i < n ; i++)
        {
            if(arr[i] == 10) 
            {
                count5-- ;
                if(count5 < 0)
                   {
                    flag = 1 ;
                   }
                count10++ ;
            }
            else if(arr[i] == 15)
            {
                if (count5 < 2 and count10 < 1)
                {
                    flag = 1 ;
                }

                if(count10 > 0)
                {
                    count10-- ;
                }
                else if(count5 >= 2) 
                {
                   count5 -= 2 ;
                }
                   
            }
            else if (arr[i] == 5) {
               count5++ ;
            }

            if(flag == 1)
            {
               break ;
            }
        }
        if(flag) cout << "NO\n" ;
        else cout << "YES\n" ;
    }
        
}

int32_t main()
{
    fast ;
    int testcases ;
    cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}