#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, x, zero = 0, pos = 0, neg = 0;
	cin >> n;
	x = n;
	while(n--)
	{
		int x;
		cin >> x;
		if(x == 0) zero++;
		if(x > 0)  pos++;
		if(x < 0)  neg++;
	}
	if( x % 2 != 0)
	{
		if(pos > x/2 )
		{
			cout << 1 ;
		}
		else if(neg > x/2)
		{
			cout << -1 ;
		}
		else
		{
			cout << 0 ;
		}
	}
	else
	{
		if (pos >= x/2 )
		{
			cout << 1 ;
		}
		else if(neg >= x/2)
		{
			cout << -1 ;
		}
		
		else
		cout << 0 ;
	}
	return 0;
}
