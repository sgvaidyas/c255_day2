#include<iostream>
using namespace std;
int main (){
	int n,m;
	cout << "Enter n ";
	cin >> n;
	m = (n+1)/2;
	int c = (n%2==1) ? 2*n : 2*n-1;
	int b = (n%2==1) ? n/2 + 1 : n/2;
	int d = (n%2==1) ? n + 1 : n;
	int x = (n%2==1) ? n - 1 : n - 2;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j < c;j++){
			if((i==j && i <= b) || (i+j == d && j > i) ){
				cout<< "*";
			}
			else if( (i+j == 2*n && (i >= b && n%2==1)) || (i+j == 2*n && (i > b && n%2==0))) 
			{
				cout<< "*";
			}
			else if( (j-i == x) && i >b)
				cout<< "*";
			else{
				cout<<"-";
			}
		}
		cout<<endl;
	}
}

