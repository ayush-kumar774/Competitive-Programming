#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
#define akriti while
int main()
{
    aakriti fact{1} , number;
    cin >> number ;
    akriti(number--)
    {
        fact*=number ;
    }
    cout << fact << endl ;

}
