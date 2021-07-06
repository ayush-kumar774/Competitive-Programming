#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
int c;
cin>>c;
double e;
cin>>e;
string s2;
getline (cin, s2);
cout<<i+c<<endl;
cout<<setprecision(1)<<fixed;
cout<<d+e<<endl;
cout<<s+s2<<endl;

    return 0;
}
