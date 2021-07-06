//https://atcoder.jp/contests/abc141/tasks/abc141_b
#include<bits/stdc++.h>
using namespace std;
bool oddCheck(char a)
{
        if (a == 'R' or a == 'U' or a == 'D')
                return true;
        else
                return false;
}
bool evenCheck(char a)
{
        if (a == 'L' or a == 'U' or a == 'D')
                return true;
        else
                return false;
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int count{0};
        string s ;
        cin >> s ;
        for(int i = 0 ; i < s.size() ; i = i+2)
        {
                if(!oddCheck(s[i])) count++;
        }
        for(int i = 1 ; i < s.size() ; i = i+2)
        {
                if(!evenCheck(s[i])) count++;
        }
        if(count) cout << "NO";
        else cout << "YES";
}