//https://codeforces.com/problemset/problem/791/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n1, n2, count = 0 ;
    cin >> n1 >> n2;
    for( int i = 1; i <= 10; i++ )
    {
        n1*=3;
        n2*=2;
        if(n1 <= n2)
        {
            count++;
        }
        else
            break;
    }
    cout << count + 1 << endl;
}
