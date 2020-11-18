// 300 out of 300
#include <vector>
std::vector<int> mutateTheArray(int n, std::vector<int> a) {
    std::vector<int>b(n) ;
    b[0] = a[0] + a[1] ;
    for (int i = 1 ; i < n - 1; i++) {
        b[i] = a[i - 1] + a[i] + a [i + 1] ;
    }
    b[n - 1] = a[n - 1] + a [n - 2];
    return b ;
}
