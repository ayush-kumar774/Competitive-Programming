#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int x)
{
    int sum = 0 ;
    while(x)
    {
        sum += x%10;
        x /= 10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, ans ;
    cin >> n ;
    if(sumOfDigits(n) % 4 == 0)
    cout << n ;
    else
    {
        while(sumOfDigits(n) % 4 != 0)
        {
            n++ ;
            ans = n ;
        }
        cout << ans ;
    }

}
