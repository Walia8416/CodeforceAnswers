//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/427/A
// Name: Police Recruits.cpp
// Status: Accepted
//============================================================================

#include <iostream>
using namespace std;

int events, temp, pol=0, untreated=0;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> events;

	for (int i=0; i<events; i++)
	{
		cin >> temp;

		if (temp>0)
		{
			pol+=temp;
		}

		else
		{
			if (pol == 0)
			{
				untreated+=1;
			}

			else
			{
				pol-=1;
			}
		}

	}	

	cout << untreated << endl;















}