//https://codeforces.com/problemset/problem/118/A
#include<bits/stdc++.h>
using namespace std ;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s ;
	cin >> s ;
	for(int i = 0; i < s.size() ; i++)
	{
		s[i] = tolower(s[i]);
	}
    for(int i = 0; i < s.size(); i++)
    {
    	if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||s[i] == 'y')
    	{
    		continue;
		}
		else
		{
			cout << "." <<s[i] ;
		}
	}
	
}
