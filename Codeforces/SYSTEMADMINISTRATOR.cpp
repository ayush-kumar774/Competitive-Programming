//https://codeforces.com/problemset/problem/245/A
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
#define aakriti long long int
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	aakriti n;
	cin >> n;
	aakriti serverAR{ 0 }, serverBR{ 0 }, serverA{ 0 }, serverB{0} ;
	while (n--)
	{
		int a;
		cin >> a;
		if (a == 1)
		{
			int reached, wasted;
			cin >> reached >> wasted;
			int total = reached + wasted;
			serverA += total;
			serverAR += reached;

		}
		else if (a == 2)
		{
			int reached, wasted;
			cin >> reached >> wasted;
			int total = reached + wasted;
			serverB += total;
			serverBR += reached;
			//serverB = reached + wasted;
		}
	}
/*
	std::cout << serverAR << " " << serverBR << endl;
	std::cout << serverA << " " << serverB << endl; */

	if (serverAR >= (serverA / 2))
		cout << "LIVE\n";
	else
		cout << "DEAD\n";

	if (serverBR >= (serverB / 2))
		cout << "LIVE\n";
	else
		cout << "DEAD\n";

	return 0;
}
