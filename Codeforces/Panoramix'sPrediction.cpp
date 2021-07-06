//http://codeforces.com/problemset/problem/80/A
#include<bits/stdc++.h>
using namespace std ;
int check_prime(int num)
{
    int i = 2 , lim = (int)sqrt(num);
    for(; i<=lim ; i++)
    {
        if(num %i == 0)
            break ;
    }
    if(i <= lim)
    return(1);
    return(0);
}
int close_prime(int num)
{
    int prime = num + 1 ;
    int i = 1 ;
    if(check_prime(prime) == 0 )
    {
        return (prime );
    }
    while(1)
    {
        prime = num + i;
        if(check_prime(prime) == 0 )
            break;
        prime = num + i;
        if(check_prime(prime) == 0 )
            break;
        i+=1;
    }
    return(prime);
}
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m;
    if( close_prime(n) == m )
    {
        cout << "YES" << endl ;
    }
    else
        cout << "NO" << endl ;
}
