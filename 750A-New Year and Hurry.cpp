//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/750/A
// Name: New Year and Hurry.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

int n, k;
int totime=240, count=0;

int main()
{	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n >> k;

	totime-=k;

	for (int i=1; i<=n; i++)
	{	
		
		if ((5*i) > totime)
		{	
			break;
		}

		else
		{
			totime-=(5*i);
			
			count++;
		}
	}

	cout << count << endl;

}