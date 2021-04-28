//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/732/A
// Name: Buy a Shovel.cpp
// Status: Accepted
//============================================================================

#include <iostream>
using namespace std;

int k, r, temp=0, count=1;
bool check = true;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	cin >> k >> r;

	while (check)
	{
		temp = k*count;
		if ((temp - r) % 10 == 0 || temp % 10 == 0)
		{
			check = false;
		}

		else
		{
			count++;
		}
	}

	cout << count << endl;
}