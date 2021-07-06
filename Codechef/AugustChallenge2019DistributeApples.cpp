//https://www.codechef.com/AUG19B/problems/DSTAPLS
#include <bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
	aakriti testcase ;
	cin >> testcase;
	while(testcase--)
	{
		aakriti k,n,r;
		cin >> n >> k;

		r = n / k;
		if(r % k == 0)
			cout << "NO\n" ;
		else
			cout << "YES\n" ;
	}
}
