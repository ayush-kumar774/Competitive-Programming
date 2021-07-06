//https://codeforces.com/problemset/problem/148/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    aakriti k, l, m, n , d;
    cin >> k >> l >> m >> n >> d ;
    set<aakriti> S;
    for(int i = k ; i <= d; i+=k)
    {
       S.insert(i);
    }
    for(int i = l ; i <= d; i+=l)
    {
       S.insert(i);
    }
    for(int i = m ; i <= d; i+=m)
    {
       S.insert(i);
    }
    for(int i = n ; i <= d; i+=n)
    {
       S.insert(i);
    }
    cout << S.size();
}
