//https://codeforces.com/problemset/problem/1214/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
     
        int n, e, d;
     
     	cin >> n >> d >> e;
     
    	int ans = n;
     
    	while (n >= 0) 
        {
    		ans = min(ans, n % d);
    		n -= (5 * e);
    	}
     
    	cout << ans << endl;
    
        
}