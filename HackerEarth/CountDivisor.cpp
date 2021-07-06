#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int l, r, k , count = 0;
    cin >> l >> r >> k;
    for(int i = l; i <= r; i++)
    {
        if(i % k == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
