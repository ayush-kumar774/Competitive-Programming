//https://codeforces.com/problemset/problem/588/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti n ;
    cin >> n ;
    aakriti sum = 0;
    while(n--)
    {
        aakriti a, b ;
        cin >> a >> b ;
        sum += a*b ;
    }
    cout << sum << endl ;
}
