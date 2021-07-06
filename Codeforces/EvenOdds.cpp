//https://codeforces.com/problemset/problem/318/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n{0}, k{0};
    cin >> n ;
    cin >> k ;
    long long odd = ceil(n / 2.0) ;
    if(k <= odd)
    {
        cout <<(1 + (k - 1) * 2) ;
    }
    else
    {
        k -= odd ;
        cout << (2 + (k - 1) * 2) ;
    }
}
