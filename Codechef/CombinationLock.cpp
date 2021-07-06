//https://codeforces.com/problemset/problem/540/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    aakriti n , original , lock ;
    cin >> n ;
    cin >> original >> lock ;
    vector<aakriti>v(n);
    while(original > 0)
    {
        int a = original % 10 ;
        v.push_back(a) ;

    }
    return 0 ;
}
