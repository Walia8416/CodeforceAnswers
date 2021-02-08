//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/144/A
// Name: General.cpp
// Status: Accepted
//============================================================================

#include <iostream>


using namespace std;

int soldierN, temp, moves;
int big=0, small=101,posB, posS;

int main()
{

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> soldierN;
	int lineUp[soldierN];


	for (int i=0; i<soldierN; i++)
	{
		cin >> temp;
		lineUp[i] = temp;

		if (lineUp[i]>big)
		{
			big = lineUp[i];
			posB=i;
		}

		if (lineUp[i]<=small)
		{
			small = lineUp[i];
			posS=i;
		}
	}
	
	moves+=posB;
	moves+=(soldierN-posS-1);
	if (posS<posB)
	{
		moves-=1;
	}
	cout << moves << endl;

}