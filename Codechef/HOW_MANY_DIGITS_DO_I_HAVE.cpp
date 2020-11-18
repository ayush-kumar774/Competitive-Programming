#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n ;
   int a = n/10;
   if(a == 0)
   {
     cout << "1";	
   }	
   if (a != 0 && a < 10)
   {
   	cout << "2";
   }
   if (a != 0 && a >= 10 && a < 100)
   {
   	cout << "3";
   }
   if( a != 0 && a > 100)
   {
   	cout << "More than 3 digits";
   }
   return 0;
}
