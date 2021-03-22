//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/472/A
// Name: Math.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

bool compCheck(int n, int count=2);

int main()
{
	int n, temp;
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	cin >> n;
	
	for (int i=2; i<n; i++)
	{
		if (compCheck(i) == false)
		{
			temp = n-i;
			if (compCheck(temp) == false)
			{
				cout << i << " " << temp << endl;
				break;
			}
		}
	}
}

bool compCheck(int n, int count)
{
	if (count==n)
	{
		return true;
	}

	if (n%count==0)
	{
		return false;
	}

	return compCheck(n, count+=1);
}