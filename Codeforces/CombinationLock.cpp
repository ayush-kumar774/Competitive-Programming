//https://codeforces.com/problemset/problem/540/A
#include <bits/stdc++.h>
using namespace std;

int main()
    {
        int n , total ;
        string a , b ;
        cin >> n >> a >> b ;
        for(int i = 0; i < n ; i++)
        {
            total += min ((a[i] - b[i]+10) % 10, (b[i] - a[i] + 10 ) %10);
        }
        cout << total ;
    }
