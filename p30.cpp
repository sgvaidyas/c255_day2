#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Please Enter a value for n ";
	cin>>n;
	for(int i = 1; i <= n;i++){
		for(int j =1; j<=(n+1)/2; j++){
			if(j<=i && i<=(n+1)/2||i + j <= n+1 && i>=(n+1)/2){
				cout<<j;
			}
		}
		cout<<endl;
	}

}

