//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/344/A
// Name: Magnet.cpp
// Status: Accepted
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int numMagnet, temp, groups=1;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> numMagnet;
	int poles[numMagnet];

	for (int i=0; i<numMagnet; i++)
	{
		cin >> temp;
		poles[i] = temp;	
	}

	for (int i=1; i<numMagnet; i++)
	{
		if (poles[i-1] != poles[i])
		{
			groups+=1;
		}
	}
	cout << groups << endl;
}