//https://atcoder.jp/contests/abc139/tasks/abc139_a
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int count{0};
        string s, s1;
        cin >> s >> s1 ;
        for(int i = 0; i < 3; i++)
        {
                if(s[i] == s1[i]) count++;
        }
        cout << count << endl;
}