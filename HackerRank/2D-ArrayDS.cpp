// In the name of Aadi Shakti
// We are nothing and You are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res[16] ;
    int arr[6][6] ;
    for(int i = 0 ; i < 6 ; i++)
    {
        for(int j = 0 ; j < 6 ; j++)
        {
            cin >> arr[i][j];
        }
    }
    res[0] =  arr[0][0] + arr[0][1] + arr[0][2] + arr[2][0] + arr[2][1] + arr[2][2] + arr[1][1] ;
    res[1] =  arr[0][1] + arr[0][2] + arr[0][3] + arr[2][1] + arr[2][2] + arr[2][3] + arr[1][2] ;
    res[2] =  arr[0][2] + arr[0][3] + arr[0][4] + arr[2][2] + arr[2][3] + arr[2][4] + arr[1][3] ;
    res[3] =  arr[0][3] + arr[0][4] + arr[0][5] + arr[2][3] + arr[2][4] + arr[2][5] + arr[1][4] ;
    res[4] =  arr[1][0] + arr[1][1] + arr[1][2] + arr[3][0] + arr[3][1] + arr[3][2] + arr[2][1] ;
    res[5] =  arr[1][1] + arr[1][2] + arr[1][3] + arr[3][1] + arr[3][2] + arr[3][3] + arr[2][2] ;
    res[6] =  arr[1][2] + arr[1][3] + arr[1][4] + arr[3][2] + arr[3][3] + arr[3][4] + arr[2][3] ;
    res[7] =  arr[1][3] + arr[1][4] + arr[1][5] + arr[3][3] + arr[3][4] + arr[3][5] + arr[2][4] ;
    res[8] =  arr[2][0] + arr[2][1] + arr[2][2] + arr[4][0] + arr[4][1] + arr[4][2] + arr[3][1] ;
    res[9] =  arr[2][1] + arr[2][2] + arr[2][3] + arr[4][1] + arr[4][2] + arr[4][3] + arr[3][2] ;
    res[10] = arr[2][2] + arr[2][3] + arr[2][4] + arr[4][2] + arr[4][3] + arr[4][4] + arr[3][3] ;
    res[11] = arr[2][3] + arr[2][4] + arr[2][5] + arr[4][3] + arr[4][4] + arr[4][5] + arr[3][4] ;
    res[12] = arr[3][0] + arr[3][1] + arr[3][2] + arr[5][0] + arr[5][1] + arr[5][2] + arr[4][1] ;
    res[13] = arr[3][1] + arr[3][2] + arr[3][3] + arr[5][1] + arr[5][2] + arr[5][3] + arr[4][2] ;
    res[14] = arr[3][2] + arr[3][3] + arr[3][4] + arr[5][2] + arr[5][3] + arr[5][4] + arr[4][3] ;
    res[15] = arr[3][3] + arr[3][4] + arr[3][5] + arr[5][3] + arr[5][4] + arr[5][5] + arr[4][4] ;

    // for(auto x : res ) cout << x << " ";
    // cout << endl ;
    int maxx = -1000 ;
    for(int i = 0; i < 16 ; i++)
    {
        if(res[i] > maxx ) maxx = res[i] ;
    }
    cout << maxx << endl ;
}