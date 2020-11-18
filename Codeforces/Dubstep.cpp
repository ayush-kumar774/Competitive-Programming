//http://codeforces.com/problemset/problem/208/A
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s ;
	cin >> s ;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B')
		{
			i = i + 2 ;
			continue;
		}
		else
		{
			cout << s[i];
			if (s[i + 1] == 'W' and s[i + 2] == 'U' and s[i + 3] == 'B')
			{
				cout << " ";
			}
		}
	}
	return 0;
}
