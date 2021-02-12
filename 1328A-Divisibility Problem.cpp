#include <iostream>

using namespace std;

int n, a, b, moves;

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> a >> b;
		moves = a%b;
		if (a%b==0)
		{
			cout << 0 << endl;
		}

		else
		{
			cout << b-moves << endl;
		}	
	}
}