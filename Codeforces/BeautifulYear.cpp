//https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ;
    int a{0} , b{0} , c{0} , d{0} ;
    long long int year{0} ;
    cin >> year ;
    while(1)
    {
        year++ ;
        a = year/1000;
        b = (year/100) % 10 ;
        c = (year/10) % 10 ;
        d = (year%10);
        set<int> v;
        v.insert(a);
        v.insert(b);
        v.insert(c);
        v.insert(d);
        if(v.size() == 4)
        {
            break ;
        }
    }
    cout << year ;
}
