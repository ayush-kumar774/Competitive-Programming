//https://codeforces.com/problemset/problem/393/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n = 0 , i = 0 , e = 0 , t = 0 ;
    cin >> s;
    n = count(s.begin(), s.end(), 'n');
    i = count(s.begin(), s.end(), 'i');
    e = count(s.begin(), s.end(), 'e');
    t = count(s.begin(), s.end(), 't');
    cout << min({ ( n - 1 )/2 , i , e/3 , t } );
    return 0;
}
