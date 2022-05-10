#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n,j=1,i;
    cout<<"Please Enter a value for n";
    cin >> n;
    
 	for(i=1;i<2*n;i++)
	{
	 	cout<<j;
		j = (i<=n)?++j:--j;
	}	   
}
