#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	  int t;
	  cin >> t;
	  while(t--)
    {
		    int n;
		    cin >> n;
		    int arr[n];
		    for(int i = 0; i < n ; i++) cin >> arr[i];
		    int mx = 0 , mn = 100;
		    int cnt = 1;
		    for(int i = 1 ; i < n ; i++)
        {
			       if( arr[i] - arr[i-1] <= 2)
             {
				           cnt++;
				           mx = max ( mx , cnt ) ;
		   	     }
			       else
             {
				           mn = min ( mn , cnt ) ;
				           mx = max( mx , cnt ) ;
				           cnt = 1 ;
			       }
		     }
		     mn = min( mn , cnt ) ;
		     cout << mn << " " << mx << endl;
	}
}
