//https://www.codechef.com/problems/REMISS
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase ;
    cin >> testcase ;
    while(testcase--)
    {
        long long int a{0} , b {0} ;
        cin >> a >> b ;
        cout << max(a , b) << " " << a+b << endl ;
    }
}
