//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/59/A
// Name: Word.cpp
// Status: Accepted
//============================================================================

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string word;
int low, len, up;

int main()
{

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> word;
	len = word.length();
	
	for (int i=0; i<len; i++)
	{
		if (isupper(word[i]))
		{	
			up+=1;
		}
	}

	low = len - up;
	
	if (low>up || low==up)
	{
		for (int i=0; i<len; i++)
		{
			putchar(tolower(word[i]));
		}
	}

	else
	{
		for (int i=0; i<len; i++)
		{
			putchar(toupper(word[i]));
		}
	}	
}

