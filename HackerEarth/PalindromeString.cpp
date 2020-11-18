#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int length = s.size();
    int flag = 0;
    for(int i = 0 ; i< length; i++)
    {
        if(s[i] != s[length - i - 1])
       {
          flag = 1;
           break;
       }
    }
    if(flag)
        cout << "NO";
    else
        cout << "YES";
}
