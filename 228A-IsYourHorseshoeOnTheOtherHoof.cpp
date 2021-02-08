//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/228/A
// Name: Is your horseshoe on the other hoof?.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

int temp, count=0;
int colArr[4];

int main()
{	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	for (int i=0; i<4; i++)
	{
		cin >> temp;
		colArr[i] = temp;
	}

	for (int i=0; i<4; i++)
	{
		for (int j=i+1; j<4; j++)
		{
			if (colArr[i] == colArr[j])
			{
				colArr[i] = '\0';
			}
		}
	}

	for (int i=0; i<4; i++)
	{
		if (colArr[i] != 0)
		{
			count+=1;
		}
	}

	cout << 4-count << endl; 
}