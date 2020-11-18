//https://www.codechef.com/problems/FSQRT
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ;
    int testcase{0} ;
    cin >> testcase ;
    while(testcase--)
    {
        long long int a ;
        cin >> a ;
        cout << int(sqrt(a)) << endl ;
    }
}
