#include <iostream>
#include <cmath>
using namespace std;
float area(int radius) {
   return M_PI * (radius * 2);
}
int main () {
   int n ;
   cin >> n ;
   cout << area(n);
}
