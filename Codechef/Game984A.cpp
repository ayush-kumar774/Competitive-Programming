//https://codeforces.com/problemset/problem/984/A
#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std ;
#define akriti long long int
int main()
{
    akriti number;
    cin >> number ;
    vector<akriti> V(number);
    for(akriti i = 0; i < number ; i++)
    {
        cin >> V[i];
    }
    sort(V.begin(), V.end());
    for(int i = 1; i < number ;i++)
    {
        if(i % 2 != 0)
        {
            raise(V.begin(), V.end(),  V[V.size()-1]);
        }
        else
            raise(V.begin(), V.end(), V[0]);
    }
    for(auto x:V)
    {
        cout << x ;
    }
}
