#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	sort (s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());
	if( (s.size() % 2 ) == 0)
	cout << "CHAT WITH HER!";
	else
	cout << "IGNORE HIM!";
}
