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
    int n ;
    cin >> n ;
    int arr[n] , month , date ;
    for(auto &x : arr) cin >> x ;
    cin >> date >> month ;
    int cnt = 0 , sum = 0 ;
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < month ; j++)
        {
            sum += (arr[i + j]);
            // if (sum == date) cnt ++ ;
            if(j == month - 1 and sum == date) 
            { 
                sum = 0 ;
                cnt++;
            }
        }
    }
    cout << cnt << endl ;
}