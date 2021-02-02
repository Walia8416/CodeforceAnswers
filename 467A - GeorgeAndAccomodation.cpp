//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/467/A
// Name: George.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

int nRooms, currentPeeps, capacity, count;

int main()
{	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> nRooms;

	for (int i=0; i<nRooms; i++)
	{
		cin >> currentPeeps >> capacity;
		if (capacity-currentPeeps >= 2)
		{
			count+=1;
		}
	}

	cout << count << endl;
}