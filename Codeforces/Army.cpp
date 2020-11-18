//https://codeforces.com/problemset/problem/38/A
#include<bits/stdc++.h>
using namespace std ;
#define endl "\n"
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti n , a , b , e[100], sum{0} ;
    cin >> n ;
   for(int i =0 ; i < n-1; i++)
    cin >> e[i];
    cin >> a >> b;
    while(a<b)
    {
        sum += e[a-1];
        a++;
    }
    cout << sum << endl ;
    return 0 ;
}
