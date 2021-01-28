//============================================================================
// Problem Link: https://codeforces.com/contest/617/problem/A 
// Name: Elephant.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

int friend_Coor;

int main()
{	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> friend_Coor;

	if (friend_Coor < 6)
	{
		cout << 1 << endl;
	}

	else
	{
		if (friend_Coor%5 == 0)
		{
			cout << friend_Coor/5 << endl;
		}

		else
		{
			cout << friend_Coor/5 + 1 << endl;
		}
	}

}