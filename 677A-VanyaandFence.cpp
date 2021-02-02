//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/677/A
// Name: Vanya.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

int nFriends, fenceHeight, pHeight, width;


int main()
{	

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> nFriends >> fenceHeight;

	for (int i=0; i<nFriends; i++)
	{
		cin >> pHeight;

		if (pHeight>fenceHeight)
		{
			width+=2;
		}

		else
		{
			width+=1;
		}
	}

	cout << width << endl;
}