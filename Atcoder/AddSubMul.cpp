// I LOVE MY FAMILY
#include<bits/stdc++.h>
using namespace std;
#define satyendra long long int
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   satyendra a, b ;
   cin >> a >> b ;
   satyendra ans = max( max ( a+b, a-b ) , a*b) ;
   cout << ans ;
}