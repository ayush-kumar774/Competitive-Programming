#include<bits/stdc++.h>
using namespace std;
    int fib(int x) {
        int f, f1 = 0, f2 = 1;
        for(int i = 2; i <x ; i++)
        {
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
        return f;
    }
int main()
{
    int ans = fib(3);
    cout << ans ;
}
