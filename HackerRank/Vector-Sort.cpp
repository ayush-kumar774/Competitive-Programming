#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number ,x ;
    cin >> number ;
    vector<int>V;
    for (int i = 0; i < number ; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    sort(V.begin(), V.end());
    for(int p: V)
    {
        cout << p << " " ;
    }
}
