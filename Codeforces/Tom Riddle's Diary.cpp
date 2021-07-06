////https://codeforces.com/problemset/problem/855/A
// I LOVE AAKRITI GOSWAMI
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
#define aakriti long long int
int main()
{
		map <string, int> m;
		int n;
		cin >> n;
		while (n--) {
			string temp;
			cin >> temp;
			if (m[temp] == 0) {
				cout << "NO" << endl;
				m[temp] = 1;
			}
			else
				cout << "YES" << endl;
		}
		return 0;
}

