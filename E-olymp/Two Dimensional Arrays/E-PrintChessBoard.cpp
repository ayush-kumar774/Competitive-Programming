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
    int n;
    cin >> n;

    int arr[n][n];
    int count1 = 1;
    int count2 = ceil((n * n) / 2.0f) + 1; 
        
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if ((i + j) % 2 == 0) 
            {  
                arr[i][j] = count1;
                count1++;
            } 
            else 
            {
                arr[i][j] = count2;
                count2++;
            }
            }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << setw(2) << arr[i][j] << " ";
        }
        cout << endl;
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