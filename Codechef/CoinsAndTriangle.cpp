//https://www.codechef.com/PRACTICE/problems/TRICOIN
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
	aakriti testcase ;
	cin >> testcase ;
	while(testcase --)
	{
		aakriti number, i = 1, counter;
		cin >> number ;
		while(number >= i)
		{
			counter = number - i ;
			number = counter;
			i++;
		}
		cout << i - 1 << endl;
	}
}

