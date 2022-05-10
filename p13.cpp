#include<iostream>
using namespace std;
int main ()
{
    int n, reversed = 0, temp,remainder;
    cout<<"Please Enter a value for n";
    cin >> n;
    temp = n;
    while(temp>0){
    	remainder = temp%10;
    	reversed = reversed*10+ remainder;
    	temp/=10;
	}
	if(reversed == n){
		cout<<"Is a palindrome";
	}else{
		cout<<"Is not a palindrome";
	}
}

