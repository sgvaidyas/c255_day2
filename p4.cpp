#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Please Enter a value for n ";
	cin>>n;
	for(int i = 0; i <n; i++){
		for(int j = 0; j<n;j++){
			if((i>=j && i<=n/2 ) || j>=i &&i>=n/2|| i>=j&&j<n -i|| j>=i && j>n-i-2){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}

