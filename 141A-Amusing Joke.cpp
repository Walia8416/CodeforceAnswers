//============================================================================
// Problem Link: https://codeforces.com/problemset/problem/141/A
// Name: Amusing Joke.cpp
// Status: Accepted
//============================================================================

#include <iostream>
#include <string>

using namespace std;

string word_1, word_2, jumbled;
int count=0;

int main()
{	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> word_1 >> word_2 >> jumbled;

	int lens[3] = {int(word_1.length()), int(word_2.length()), int(jumbled.length())};


	for (int i=0; i<lens[0]; i++)
	{	

		for (int j=0; j<lens[2]; j++ )
		{	
			
			if (word_1[i] == jumbled[j])
			{	
				jumbled[j] = '\0';
				break;	
			}	
		}	
	}

	for (int i=0; i<lens[1]; i++)
	{	

		for (int j=0; j<lens[2]; j++ )
		{	
			
			if (word_2[i] == jumbled[j])
			{	
				jumbled[j] = '\0';
				break;	
			}	
		}	
	}

	for (int i=0; i<lens[2]; i++)
	{
		if (jumbled[i] != '\0')
		{
			count+=1;
		}
	}

	if (count==0 && lens[0]+lens[1] == lens[2])
	{
		cout << "YES" << endl;
	}

	else
	{
		cout << "NO" << endl;
	}
	
}