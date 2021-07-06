//https://www.codechef.com/AUG19B/problems/MSNSADM1
#include<bits/stdc++.h>
using namespace std ;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti testcase{0} , number{0} ,maxa{0};
    cin >> testcase ;
    while(testcase--)
    {
        cin >> number ;
        aakriti goal[number] ;
        aakriti foul[number] ;
        for(int i = 0 ; i <number ;i++)
        {
            cin >> goal[i] ;
            goal[i] = goal[i]*20;
        }
        for(int i = 0 ; i <number ;i++)
        {
            cin >>foul[i] ;
            foul[i] = foul[i]*10 ;
            goal[i] = goal[i] - foul[i] ;
        }
        for(int i = 0 ; i<number ; i++)
        {
            if(goal[i] > maxa)
            {
                maxa = goal[i] ;
            }
        }

        cout <<maxa << endl ;
        maxa = 0;

    }
}
