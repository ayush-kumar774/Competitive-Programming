//http://codeforces.com/problemset/problem/263/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int mat[5][5];
    int row{0}, col{0}, x{0}, y{0};
    for(row = 0; row < 5 ; row++)
    {
        for(col = 0; col < 5 ; col++)
        {
            cin >> mat[row][col];
            if(mat[row][col] == 1)
            {
                x = row ;
                y = col ;
            }
        }
    }
    cout << abs(x-2)+abs(y-2) << endl;
}
