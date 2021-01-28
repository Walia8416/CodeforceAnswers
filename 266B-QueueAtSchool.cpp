//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/266/B
// Name: Queue.cpp
// Status: Accepted
//============================================================================





#include <iostream>
#include <string>

using namespace std;

int cust, sec;
string queue;

int main()
{	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> cust >> sec;
	cin >> queue;

	for (int i=0; i<sec; i++)
	{
		for (int j=0; j<cust; j++)
		{
			if (queue[j] == 'B' && queue[j+1] == 'G')
			{
				queue[j] = 'G';
				queue[j+1] = 'B'; 
				j+=1;
			}
		}
	}

	cout << queue;
}