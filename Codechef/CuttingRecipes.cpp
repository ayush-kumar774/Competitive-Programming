//https://www.codechef.com/problems/RECIPE
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
#define akriti while
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) ;
    aakriti testcase{0} ;
    cin >> testcase ;
    akriti(testcase--)
    {
        aakriti number, mini , cnt{0};
        cin >> number ;
        aakriti arr[number];
        for(int i =0 ; i < number; i++)
        {
            cin >> arr[i];
        }
        mini = arr[0];
        for(int i= 0; i<number; i++)
        {
            if(arr[i]<mini)
            {
                mini = arr[i];
            }
        }
        for(int i = 0; i < number ; i++)
        {
            if(arr[i]%mini == 0)
                cnt++ ;
        }
        if(cnt==number)
        {
             for(int i= 0; i<number; i++)
            {
                 arr[i]/=mini ;
                 cout << arr[i] << " " ;
            }
        }
        else
        {
            for(int i = 0; i < number ; i++)
            {
                cout << arr[i] << " " ;
            }
        }
        cout << endl ;

    }
}
