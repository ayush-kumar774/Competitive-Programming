//https://www.codechef.com/problems/LECANDY
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
   aakriti testcase ;
   cin >> testcase ;
   while(testcase--)
   {
       aakriti a , b , sum{0} ;
	   cin >> a >> b ;
	   while(a--)
	   {
	   	 aakriti c;
	   	 cin >> c ;
	   	 sum += (sum+c)%10000007
	   }
	   if (sum > b)
	   cout << "NO" << endl ;
	   else
	   cout << "YES" << endl ;
   }	
}
