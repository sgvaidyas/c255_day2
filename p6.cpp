#include<iostream>
using namespace std;
int main(){
	int n,count = 1;
	cout<<"Please Enter a value for n ";
	cin>>n;
	while(n/10 > 0){
		count +=1;
		n = n/10;
	}
	cout<<count;
}

