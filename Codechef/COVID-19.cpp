//https://www.codechef.com/MAY20B/problems/COVID19#
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int testcases ;
  cin >> testcases ;
  while(testcases--)
  {
     int n , count = 0 ;
     cin >> n ;
     int arr[n] , diff[n-1];
     for(int i = 0; i < n; i++) cin >> arr[i] ;
     for(int i = 0, j = 0; i < n, j < n -1 ; i++)
     {
       diff[j] = arr[j+1] - arr[j];
       j++;
     }

     for(int i = 0; i < n-1 ; i++) {
       if(diff[i] > 2) count++;
     }

     if(count == 0 ) cout << n << " " << n << endl ;

     // for(auto x : diff) cout << x << " ";
     // cout << endl ;
     else {

    int s[count+2];
    s[0] = 0;
    for(int i = 0 , j = 1; i < n-1, j < count + 1 ; i++)
    {
      if(diff[i] >= 2) {
        s[j] = i + 1;
        j++;
      }
    }
    s[count + 1] = n;

    // for(auto x : s) cout << x <<" " ;
    // cout << endl ;
    int ans[count + 1];
     for(int i = 0 , j = 0; i < count +2 , j < count + 1 ; i++)
     {
       ans[j] = s[i+1] - s[i] ;
       j++;
     }

     sort(ans, ans+count+1);
     // for(auto x : ans) cout << x << " " ;
     // cout << endl ;
     cout << ans[0] << " " << ans[count] << endl ;
  }
}

}
