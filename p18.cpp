#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Please Enter a value for n ";
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j = 0; j<2*n - 1;j++){
			if(j<=i){
				cout<<j +1;
			}else if(2*n-2-j<=i){
				cout<<2*n-1-j;
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}

