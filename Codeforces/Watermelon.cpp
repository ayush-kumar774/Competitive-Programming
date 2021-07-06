//https://codeforces.com/problemset/problem/4/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    if( n % 2 == 0 and n > 2)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}
