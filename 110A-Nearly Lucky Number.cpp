//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/110/A 
// Name: LuckyNumber.cpp
// Status: Accepted
//============================================================================

#include <iostream>

using namespace std;

int count, len;
string n;
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n;
	len = n.length();

	for (int i=0; i<len; i++)
	{
		if (n[i]=='7' || n[i] == '4')
		{
			count+=1;
		}
	}
	
	if (count == 7 || count == 4)
	{
		cout << "YES" << endl;
	}

	else
	{
		cout << "NO" << endl;
	}
}