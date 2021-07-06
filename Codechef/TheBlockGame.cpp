//https://www.codechef.com/problems/PALL01
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
#define akriti while
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ;
    aakriti testcase , number , number2;
    cin >> testcase ;
    akriti(testcase--)
    {
        cin >> number ;
        string s = to_string(number) ;
        reverse(s.begin(), s.end());
        number2 = stoi(s) ;
        if(number == number2)
            cout << "wins" << endl ;
        else
            cout << "losses" << endl ;
    }
}
