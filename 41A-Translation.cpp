//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/41/A
// Name: Translation.cpp
// Status: Accepted
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string s, t;
int len, a;
bool flag=false;

int main()
{

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> s;
	cin >> t;

	len = s.length();
	a = len-1;

	for (int i=0; i < len; i++)
	{
		if (s[i] != t[a])
		{	
			flag = true;
			break;
		}

		a-=1;
	}

	if (flag)
	{
		cout << "NO" << endl;
	}

	else
	{
		cout << "YES" << endl;
	}
}