//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/155/A
// Name: I_love_username.cpp
// Status: Accepted
//============================================================================

#include <iostream>
using namespace std;

int n,low=10001,high=0,temp,count=0;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n;
	cin>>temp;
	low=temp;
	high=temp;
	for (int i=0; i<n; i++)
	{
		cin >> temp;
		if (temp>high)
		{
			count++;
			high=temp;
		}

		if (temp<low)
		{
			count++;
			low=temp;
		}

	}

	cout << count << endl;





}