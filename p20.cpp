#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cout <<"\n Enter a number: ";
    cin>>n;
	
	for(j = 1; j <= n; j++)
	{
		for(i = 1; i < n; i++)
		{
			if(i <= j)
				cout << i;
			else
				cout << " ";
		}
	
		for(i = n; i >= 1; i--)
		{
		if(i <= j)
			cout << i;
		else
			cout << " ";
		}
		cout << "\n";
	}
	return 0;
}

