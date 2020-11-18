//https://www.codechef.com/problems/CHOPRT
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int testcase{0} ;
    cin >> testcase ;
    while(testcase--)
    {
        long long int a{0} , b{0} ;
        cin >> a >> b ;
        if(a > b)
            cout << ">" << endl ;
        else if (a == b)
            cout << "=" << endl ;
        else
            cout << "<" << endl ;
    }
}
