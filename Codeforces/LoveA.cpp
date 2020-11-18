//https://codeforces.com/problemset/problem/1146/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    long a, o, length;
    cin >> s;
    length = s.size();
    a = count(s.begin(), s.end(), 'a');
    if(a>length/2)
        cout << length << endl;
    else
        cout << a+(a - 1) << endl;
    return 0;
}
