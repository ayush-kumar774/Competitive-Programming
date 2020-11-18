// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n , counter = 0 ;
    cin >> n ;
    for(long long i = 0; i <= n ; i++)
    {
        // cout << "Sum is " << n + i << endl ;
        // cout << "XOR is " << (n^i) << endl ;
        if( (n + i ) == (n^i) ) counter++;
    }
    cout << counter << endl ;
}