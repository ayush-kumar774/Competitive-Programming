//https://codeforces.com/contest/711/problem/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti string
int main()
{
	aakriti str, s;
	int n;
	cin >> n;
    while ( n-- )
   {
	cin >> s;
	str += s+ "\n" ;
	}
	int t = str.find( "OO" );
	if(t >= 0)
	{
		str.replace(t,2,"++");
		cout<<"YES\n"<<str;
	}
	else
		cout<<"NO";

}
