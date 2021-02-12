#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string word, senten;
int n, count;
int main()
{	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n;
	cin >> word;

	for (int i=0; i<n; i++)
	{
		senten+=tolower(word[i]);
	}

	for (int i=97; i<=122; i++)
	{
		for (int j=0; j<n; j++ )
		{
			if (i == int(senten[j]))
			{
				count+=1;
				break;
			}
		}
	}
	
	if (count>=26)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}