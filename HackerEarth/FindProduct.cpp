#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    long long ans = 1;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        ans = (ans*array[i]) % ( (10*10*10*10*10*10*10*10*10)+7 ) ;
    }

    cout << ans ;
    return 0;
}
