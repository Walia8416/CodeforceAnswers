//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/734/A 
// Name: AntonDanik.cpp
// Status: Accepted
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int n, Acount, Dcount;
string games;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	cin >> n;
	cin >> games;
	
	for (int i=0; i < n; i++)
	{
		if (games[i] == 'A')
		{
			Acount+=1;
		}
	}
	
	Dcount = n - Acount;

	if (Dcount == Acount)
	{
		cout << "Friendship" << endl;
	}

	if (Dcount>Acount)
	{
		cout << "Danik" << endl;
	}

	if (Acount>Dcount)
	{
		cout << "Anton" << endl;
	}


}



