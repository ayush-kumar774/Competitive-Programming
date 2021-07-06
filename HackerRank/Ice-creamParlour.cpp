// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int testcase ;
    cin >> testcase ;
    while(testcase--)
    {
        int price ;
        int n ;
        cin >> price >> n ;
        int flavours[n];
        for(auto &X : flavours) cin >> X ;
        int start , end , k ;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i + 1 ; j < n ; j++)
            {
                if(flavours[i] + flavours[j] == price)
                {
                    //cout << flavours[i] + flavours[j] << endl ;
                    start = i ;
                    end = j ;
                    k = 1 ;
                    break ;
                }
                if(k == 1) break ;
            }
        }
        cout << start + 1 << " " << end + 1 << endl ;
    }
}