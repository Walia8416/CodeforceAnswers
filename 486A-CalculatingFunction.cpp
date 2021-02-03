//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/486/A
// Name: CalculatingFunction.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

long long int number;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	
	cin >> number;

	if (number%2==0)
	{
		cout << number/2 << endl;
	}

	else
	{
		cout << ((number+1)/2)*(-1) << endl;
	}
}