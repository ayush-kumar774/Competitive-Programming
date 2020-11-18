//https://codeforces.com/problemset/problem/228/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   long long int arr[4];
   set<long long int> arry;
   for(int i = 0 ; i < 4; i++ )
   {
       cin >> arr[i];
       arry.insert(arr[i]);
   }
   cout << 4 - arry.size();

}
