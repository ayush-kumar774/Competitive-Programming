//https://www.codechef.com/problems/AMR15A
#include<bits/stdc++.h>
using namespace std ;
#define akriti long long int
#define sahaj while
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    akriti testcase{0} , num{0} , odd{0} , even{0} ;
    cin >> testcase ;
    sahaj(testcase--)
    {
        cin >> num ;
        (num%2 == 0) ? even++ : odd++ ;

    }
    (even > odd) ? cout << "READY FOR BATTLE" << endl : cout << "NOT READY" ;
}
