#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int number, numberOfQueries, count = 0 ;
	cin >> number ;
	int array[number] ;
	for ( int i = 0; i < number; i++ )
	{
		cin >> array[i] ;
	}
	cin >> numberOfQueries ;
  while(numberOfQueries--)
   {
       {
          int n;
          cin >> n;
          for ( int i = 0; i < number; i++ )
          {
            if(array[i] == n)
            {
                count ++;
            }

          }
          if(count != 0)
          cout << count << endl;
          else
            cout << "NOT PRESENT" << endl;
          count = 0;
       }
   }
   return 0;
}
