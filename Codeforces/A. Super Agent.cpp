// https://codeforces.com/problemset/problem/12/A

#include<bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    char key1[3] , key2[3], key3[3] ;
    for(auto &x : key1) cin >> x ;
    for(auto &x : key2) cin >> x ;
    for(auto &x : key3) cin >> x ;

    if(key1[0] == key3[2] and key1[1] == key3[1] and key1[2] == key3[0] and key2[2] == key2[0]) {
        cout << "YES" << endl ;
    }
    else cout << "NO" << endl ;
    
}

void solve2()
{
    char key[3][3] ;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cin >> key[i][j] ;
        }
    }
    string a = "" , b = "" , c = "" ;
    a += key[0][0]; 
    a += key[0][1]; 
    a += key[0][2]; 
    b += key[1][0]; 
    b += key[1][1]; 
    b += key[1][2]; 
    c += key[2][0]; 
    c += key[2][1]; 
    c += key[2][2]; 
 
    reverse(a.begin(), a.end()) ;
    int j = 2 , flag = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        if(key[i][0] != key[j][2]){
            flag = 1 ;
            break ;
        }
        j--;
    }
    if(flag == 0 and a == c) cout << "YES" << endl ; 
    else cout << "NO" << endl ;
}

int32_t main()
{
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve2() ;
    }
    return 0 ;
}

/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/