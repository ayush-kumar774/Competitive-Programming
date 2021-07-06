//https://www.codechef.com/problems/FLOW004
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
        long long int number{0} , sum{0} ;
        cin >> number ;
        string s ;
        s = to_string(number) ;
        sum = int(s[0]) - 48 ;
//        cout << sum ;
//        cout << endl << s[s.size()-1] << endl ;
        sum += int(s[s.size()-1]) - 48 ;
        cout << sum << endl ;
        sum = 0 ;
    }
}
