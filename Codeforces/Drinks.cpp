//https://codeforces.com/problemset/problem/200/B
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ;
    int number{0} ;
    cin >> number ;
    double a = double(number);
    long long int sum{0} ;
    while(number--)
    {
        int x ;
        cin >> x ;
        sum += x;
    }
//    cout << sum ;
    cout << sum/a ;
}
