#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int lower, upper, div, rev, count=0;
	string s1;
	cin>>lower>>upper>>div;

		while(lower != upper)
		{
			s1 = to_string(lower);
			reverse(s1.begin(), s1.end());
			rev = stoi(s1);

			if(abs(lower - rev) % div == 0)
			count++;
			lower++;
		}
	cout<<count;
}
