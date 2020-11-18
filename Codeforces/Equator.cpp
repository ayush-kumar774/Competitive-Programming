//https://codeforces.com/problemset/problem/962/A
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
int main()
{
    aakriti n , sum = 0, mx = 0 , i, counter{0};
    cin >> n ;

    vector<aakriti> V (n);
    for(auto &x : V)
    {
        cin >> x ;
        sum += x ;
    }
    sum = sum / 2 ;
    while(sum > mx)
    {
        i = 0 ;
        mx += V[i];
        counter++;
        i++;
    }
    cout << counter << endl ;
    cout << sum << endl;
}
