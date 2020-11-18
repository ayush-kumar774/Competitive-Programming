//https://codeforces.com/problemset/problem/1186/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 0 , m = 0 , k = 0 ;
    cin >> n >> m >> k ;
    if ( n <= m && n <=k  )
        cout << "Yes";
    else
        cout << "No";
}
