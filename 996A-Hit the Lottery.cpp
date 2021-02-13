//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/996/A
// Name: Hit the Lottery.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

int den[5] = {100, 20, 10, 5, 1}; 
int moves=0, n, i=-1;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n;
	
	while (n!=0)
	{
		i++;
		if (n>=den[i])
		{	
			moves += n/den[i];
			n=n%den[i];
			i=0;
		}
	}

	cout << moves << endl;
}