//https://www.codechef.com/INFY2019/problems/INF1908
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti testcase;
        cin >> testcase;
        while(testcase--)
        {
              aakriti a, b ;
              cin >> a >> b;
              for( int i = 1; i <=b ; i++)
              {
                      if(a % 10 == 9)
                      {
                              a/= 10 ;
                              a*= 10 ;
                      }
                      else a++;
              } 
              cout << a << endl ;
        }

        

}
//  int t=0;
//     cin>>t;
//     while(t--){
//     int n=0,k=0;
//     cin>>n>>k;
//     int b=((n%10)+(k%10))%10;
//     int a=((n/10)*10)+b;
//     cout<<a<<endl;
//     }