//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/61/A
// Name: UltraFastMathematician.cpp
// Status: Accepted
//============================================================================

#include <iostream>
#include <string>

using namespace std;

string numA, numB, ans;
int len;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> numA >> numB;
	len = numA.length();

	for (int i=0; i<len; i++)
	{
		if (numA[i] == numB[i])
		{
			ans+='0';
		}

		else
		{
			ans+='1';
		}
	}

	cout << ans << endl;
}