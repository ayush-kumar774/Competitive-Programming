//https://codeforces.com/contest/1199/problem/F
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ;
    aakriti number {0} , counthash{0};
    cin >> number ;
    vector<char>v(number*number) ;
    for(auto &x : v)
    {
        cin >> x ;
        if(x == '#')
        {
            counthash++ ;
        }
    }
    if(counthash > number)
        cout << number ;
    else if(counthash == 0)
        cout << 0 ;
    else if(counthash < number)
        cout << counthash ;


}
