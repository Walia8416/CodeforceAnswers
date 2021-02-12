//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/1335/A
// Name: Candies and Two Sisters.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

int n, temp, a, b;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		cin >> temp;

		if (temp%2==0)
		{
			a = temp/2+1;
			b = temp/2 -1;

		} 

		else
		{
			a = temp/2+1;
			b = temp/2;
		}

		cout << b << endl;
	}
}