// In the name of Aadi Shakti
// We are nothing and You are everything
// Jai Mata Di

// https://www.hackerrank.com/challenges/sparse-arrays/problem

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , q ;
    cin >> n ;
    vector<string> str (n) ;
    for(int i = 0 ; i < n ; i++) cin >> str[i] ;
    
    cin >> q ;
    vector<string> queries (q) ;
    for(int i = 0 ; i < q ; i++) cin >> queries[i] ;
    
    int res[q] = {0};

    for(int i = 0 ; i < q ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(queries[i] == str[j]) res[i] += 1 ;
        }
    }

    for(auto x : res) cout << x << endl ;

}