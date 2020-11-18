#include <iostream>
#include <iomanip>
#include <limits>
#include<cstdio>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double d2;
    string s2,s3;
    cin>>a;
    cin>>d2;
    cin>>s2;
    s3=s + s2;
    cout<<i+a<<endl;
     std::cout << std::setprecision(1) << std::fixed;;
    cout<<d+d2<<endl;
    cout<<s3<<endl;
    return 0;
}
