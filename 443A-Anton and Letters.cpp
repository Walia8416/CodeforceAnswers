//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/443/A
// Name: Anton and Letters.cpp
// Status: Accepted
//============================================================================

#include <iostream>
#include <string>

using namespace std;

string set;
int len;
int j=0, count=0;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	getline(cin, set);
	len = set.length();
		
	char letters[len/3];
	for (int i=1; i<len-1; i+=3)
	{	
		letters[j] = set[i];
		j++;
	}

	for (int i=0; i<(len/3); i++)
	{
		for (int j=i+1; j<(len/3); j++)
		{
			if (letters[i] == letters[j])
			{
				letters[i] = '\0';
				count+=1;
			}
		}
	}

	cout << (len/3)-count << endl;


}