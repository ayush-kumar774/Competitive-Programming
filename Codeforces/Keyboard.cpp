//https://codeforces.com/problemset/problem/474/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    char s;
    cin >> s;
    string str, newstr;
    newstr = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> str;

    for (int i = 0; i < str.size(); ++i)
    {
        for (int j = 0; j < newstr.size() ; ++j)
        {

            if( s == 'R')
            {
                if ( str[i] == newstr[j])
                cout << newstr[j-1];
            }
            if( s == 'L')
            {
                if ( str[i] == newstr[j])
                    cout << newstr[j+1];
            }
        }
    }
    return 0;
}
