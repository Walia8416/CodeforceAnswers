//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/510/A
// Name: Fox And Snake.cpp
// Status: Accepted
//============================================================================
#include <iostream>

using namespace std;

int r, c, j=0;

int main()
{	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> r >> c;

	for (int i=0; i<(r); i++)
	{
		if (i%2==0)
		{
			cout<< string(c,'#') << endl;
		}

		else
		{	
			if (j == 1)
			{
				cout << '#';
				cout << string(c-1, ' ') << endl;
				j=0;
			}

			else
			{
				cout << string(c-1, '.');
				cout << '#' << endl;
				j=1;
			}
				  
		}
	}	

}