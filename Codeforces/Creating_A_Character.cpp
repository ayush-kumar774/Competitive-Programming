//https://codeforces.com/contest/1217/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int testcase;
        cin >> testcase;
        while(testcase--)
        {
                int str, Int, exp;
                cin >> str >> Int >> exp;
                cout << max (0 ,exp - max ( ( Int + exp - str + 2 ) / 2, 0 ) + 1 );
                cout << endl ;
        }
}