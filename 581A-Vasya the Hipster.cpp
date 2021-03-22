//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/581/A
// Name: Vasya the Hipster.cpp
// Status: Accepted
//============================================================================
#include <iostream>

using namespace std;

int primeChk(int n, int count=2)
{
	if (count==n)
	{
		return true;
	}

	if (n%count==0)
	{
		return false;
	}

	return primeChk(n, count+1);
}

int main()
{	
	
	
	for (int r=2; r<10000; r++)
	{
		if (primeChk(r))
		{
			cout << r << endl;
		}

	}

	
	
}