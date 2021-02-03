//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/200/B
// Name: Drinks.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

float drinks, sum, temp, avg;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> drinks;

	for (int i=0; i<drinks; i++)
	{
		cin >> temp;
		sum+=temp;
	}

	avg = sum/drinks;
	cout << sum/drinks << endl;
}