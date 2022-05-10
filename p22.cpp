#include <iostream>

using namespace std;

int main()
{
	int n =6,m,c;
	
	m = (n+1)/2;
    c = (n%2==1) ? 2*n : 2*n-1 ;
    /*
    if(n%2==1)
    	c=2*n;
    else
    	c=2*n-1;
    	*/
    for (int i = 1; i <= n; i++)
    {
    	for(int j=1;j<c;j++)
    	{
    		if(i+j==m+1 || j-i==m-1 || i+j==2*n+m-1)
    			cout<<"*";
    		else
    			cout<<" ";
		}
		cout<<endl;
	}
}
