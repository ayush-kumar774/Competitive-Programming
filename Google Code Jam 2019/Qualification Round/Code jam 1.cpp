#include<bits/stdc++.h>
void codejam(int);
using namespace std;
int p= 0;
int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=0; i<t; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<t; i++)
	{
		codejam(arr[i]);
	}
}
	 void codejam(int m)
	{
		int n = m;
		string s1 = to_string(n);
		for(int i = 0; i<s1.size(); i++)
		{
			if(s1[i]=='4')
			s1[i]='3';
		}
		int r = stoi(s1);
		cout << "Case #" << p + 1 << ": " << r << " " << n - r << endl ;
		p++;
	}

