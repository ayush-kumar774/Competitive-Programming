// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n;
    cin >> n ;
    if (n == 1) cout << 1 << endl ;
    else if(n == 2)
    {
        cout << "1 2" << endl ;
        cout << "4 3" << endl ;
    } 
    else if(n == 3)
    {
        cout << "1 6 5" << endl ;
        cout << "7 3 8" << endl ;
        cout << "4 9 2" << endl ;
    }
    else 
    {
        int arr[n*n] = {0} ;
        int j = 0, k = 1, ind = 0 , countLeft {0}, diagonalCount{0};
        for(int i = 0 ; i < n*n; i += n+1 )
        {
            j += 2 ;
            arr[i] = j ;
            diagonalCount++ ;
        }
        for(int i = n - 1 ; i < ( (n *n) - (n-1) ) ; i += n-1)
        {
            if(arr[i] == 0)
            {
                j += 2 ;
                arr[i] = j ;
                diagonalCount++ ;
            }
        }
        int even = n*n / 2 ;
        countLeft = even - diagonalCount ;
        for(int i = 0, l = 0 ; i < n * n, l < countLeft; i++)
        {
            if(arr[i] == 0)
            {
                j += 2 ;
                arr[i] = j ;
                l++;
            }
        }
        
        arr[n*n -2] = 1 ;
        for(int i = 0 ; i < n*n ; i++)
        {
            if(arr[i] == 0 and k <= n*n)
            {
                k += 2 ;
                arr[i] = k ;
            }
        }
        int index[n] = {0} ;
        ind = n - 1 ;
        index[0] = n-1 ;
        for(int i = 1 ; i < n ; i++)
        {
            ind += n;
            index[i] = ind ;  
        } 

    //     //for(auto &x : index ) cout << x << " " ;

        for(int i = 0, j = 0 ; i < n*n , j < n  ; i++)
        {
            cout << arr[i] <<  " " ;
            {
                if(i == index[j]){
                    cout << endl ;
                    j++;
                }
            }
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