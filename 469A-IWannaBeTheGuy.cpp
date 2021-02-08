//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/469/A
// Name: IWannaBeTheGuy.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

int temp, p, q, levels, count;
int passArr[250];

int main()
{	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> levels >> p;

	for (int i=0; i < p; i++)
	{	
		cin >> temp;
		passArr[i] = temp;  
	}

	cin >> q;

	for (int i=p; i<p+q; i++)
	{
		cin >> temp;
		passArr[i] = temp;
	}

	for (int i=1; i<=levels; i++)
	{
		for (int j=0; j<p+q; j++)
		{
			if (passArr[j] == i)
			{
				count+=1;
				break;
			}
		}
	}

	if (count == levels)
	{
		cout << "I become the guy." << endl;
	}
	else
	{
		cout << "Oh, my keyboard!" << endl;
	}
}