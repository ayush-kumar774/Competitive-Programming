//https://www.codechef.com/problems/CIELAB
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    aakriti a , b;
    cin >> a >> b ;
    if( (a - b) % 10 < 9 )
    cout << a - b + 1 ;
    else
    {
        cout << a - b - 1; 
    }
    
}
