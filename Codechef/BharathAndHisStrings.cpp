// //https://www.codechef.com/NPLQ2019/problems/NPLQ19D
// #include<bits/stdc++.h>
// using namespace std;
// #define aakriti long long int
// int main()
// {
//         ios_base::sync_with_stdio(false) ;
//         cin.tie(0) ;
//         aakriti testcase ;
//         cin >> testcase ;
//         while(testcase--)
//         {
//                 string s ;
//                 cin >> s ;
//                 for(int i = 0; i < s.size(); i++)
//                 {
                        
//                 }
//                 // s.erase(unique(s.begin(), s.end()), s.end());
//                 // cout << s << endl ;
//         }
// }
#include <iostream>
#include <cassert>
int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int fibonacci_fast(int n) {
    if (n <= 1)
        return n;

    int F1, F2, F;
    F1 = 0;
    F2 = 1;
    for (int i = 2; i <= n; i++) {
        F = F1 + F2;
        F1 = F2;
        F2 = F;
    }
    return F;
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main() {
    int n = 0;
    std::cin >> n;

    // test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
