//http://codeforces.com/problemset/problem/253/A
#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); */
	int boys, girls;
	cin >> boys >> girls;
		string s;
	for (int i = 0; i <= boys; i++)
	{
		s[i] = 'B';
	}
	string g;
	for (int i = 0; i <= boys; i++)
	{
		g[i] = 'G';
	}
	if(boys == girls)
    {
        	for (int i = 0, j = 0; i < boys, j < girls; i++, j++)
            {
                cout << s[i] << g[j];
            }
    }
    else
    {
        if(boys > girls)
        {
            int m = boys - girls ;
            for(int i = 1; i <= m ; i++) cout << "B";
            boys = boys - girls ;
            	if(boys == girls)
                    {
                            for (int i = 0, j = 0; i < boys, j < girls; i++, j++)
                            {
                                cout << g[j] << s[i];
                            }
                    }
        }

         if(girls > boys)
        {
            int m = girls - boys ;
            for(int i = 1; i <= m ; i++) cout << "G";
            girls = girls - boys ;
            	if(boys == girls)
                    {
                            for (int i = 0, j = 0; i < boys, j < girls; i++, j++)
                            {
                                cout << s[i] << g[j];
                            }
                    }
        }
    }
   return 0 ;
}
