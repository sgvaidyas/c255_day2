#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n, power=0;
    cout<<"Please Enter a value for n";
    cin >> n;
	while(pow(2,power)<=n){
		power++;
	}
	power--;
	while(power>=0){
		if(pow(2,power)>n){
			cout<<0;
		}else{
			n = n- pow(2,power);
			cout<<1;
		}
		power--;
	}

}

