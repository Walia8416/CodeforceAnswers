//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/271/A
// Name: BeautifulYear.cpp
// Status: Accepted
//============================================================================

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int n, len, count;
string wordn;
bool flag=true;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n;

	while (flag)
	{	
		//CONVERTING INTEGER TO STRING
		n+=1;
		stringstream ss;
		ss << n;
		ss >> wordn;

		len = wordn.length();
		count = 0;

		for(int i=0; i<len; i++)
		{	
			for (int j=0; j<len; j++)
			{
				if (wordn[i] == wordn[j])
				{
					count+=1;
				}
			}
		}

		if (count == len)
		{
			cout << n << endl;
			flag = false;
		}
	}
}
