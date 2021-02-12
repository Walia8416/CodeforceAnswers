#include <iostream>

using namespace std;

int n, games, count=0;
int  temp;
int main()
{	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	cin >> n;
	games = n*2;
	int teams[games];

	for (int i=0; i<games; i++)
	{	
		cin >> temp; 
		teams[i] = temp;
	}

	for (int host=0; host<games; host+=2)
	{
		for (int guest=1; guest<games; guest+=2)
		{
			if (teams[host] == teams[guest])
			{	
				
				count++;
			}
		}
	}
	cout << count << endl;
	
}