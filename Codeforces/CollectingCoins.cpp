//http://codeforces.com/contest/1294/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long testcase ;
    cin >> testcase ;
    while(testcase--)
    {
        long long a , b, c , n ;
        cin >> a >> b >> c >>  n ;
        if( (a + b + c + n ) % 3 )
        {
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
}