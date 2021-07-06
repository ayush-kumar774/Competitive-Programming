//https://codeforces.com/contest/466/problem/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti n , m , a , b , sum {0}, sum2{0}, sum3{0};
    cin >> n >> m >> a >> b ;
    sum3 = (n/m)*b ;
    if(n%m != 0)
        sum3 = sum3+b;
    sum = ( (n/m)*b + (n%m)*a);
    sum2 = (n*a);
    cout << min(min(sum, sum2),sum3);

}
