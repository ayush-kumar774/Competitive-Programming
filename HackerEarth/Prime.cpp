#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, count;
    cin >> n;
    for(int j = 1; j <= n; j++)
    {
        count = 0;
        for(int i = 2; i <= j/2; i++ )
        {
            if( j % i == 0 )
            {
                count++;
                break;
            }
        }
        if(count == 0 && j != 1)
        {
            cout << j << " " ;
        }
    }
    return 0;
}
