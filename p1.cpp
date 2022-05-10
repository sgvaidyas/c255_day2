#include <iostream>

using namespace std;

int main()
{
	int n,i,j;
	cout<<"\n Enter n = ";
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=i && i+j<=n+1 )
				cout<<"*";
			else if(i+j>=n+1 && j<=i)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

