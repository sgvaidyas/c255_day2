#include<iostream>
using namespace std;
int main (){
	int n;
	bool isHalfway = false;
	cout << "Enter n ";
	cin >> n;
	bool even = (n%2==0);

	for (int i = 1; i > 0; i++) {
		if(isHalfway){
			i-=2;
		}
		for (int j = 1; j <= i; j++) {	
			cout<< j;
		}
		if(i == (n+1)/2){
			isHalfway = true;
			if(even){
				i++;
				even = false;
			}
		}
		cout<< endl;
	}
}

