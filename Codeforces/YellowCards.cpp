//https://codeforces.com/problemset/problem/1215/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti int
aakriti main()
{
     aakriti a, b, c, d, n ;
     cin >> a >> b >> c >> d >> n ;
	if (c < d) swap( c , d), swap ( a ,b );
	cout << max( 0, n - ( c - 1 ) * a - ( d - 1 ) * b )<<" "; 
	if (d*b>=n)
        {
		cout << n / d;
                return 0;
	}
	cout<<(n-d*b)/c+b;
}
