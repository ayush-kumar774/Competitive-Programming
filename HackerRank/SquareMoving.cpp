#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    
    string direction; 
    cin >> direction ;
    int cnt = std::count(direction.begin(), direction.end(), ';');
    cout << cnt << endl ;
    string dir[cnt+1] = {""};
    for(int i = 0 ; i < cnt+1; i++)
    {
    
    }
    char arr[n][n] ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> arr[i][j] ;
        }
    }

    return 0 ;
}