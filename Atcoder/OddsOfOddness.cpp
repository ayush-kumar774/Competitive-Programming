//Atcoder contest 142
//https://atcoder.jp/contests/abc142/tasks/abc142_a
#include<bits/stdc++.h>
using namespace std;
#define aakriti int
aakriti main()
{
        aakriti n , count{0};
        cin >> n ;
        for(int i = 0 ; i <= n ; i++ )
        {
                if(i % 2 != 0)
                {
                        count++;
                }
        }
        std::cout << float(count) / float(n) << endl ;

}