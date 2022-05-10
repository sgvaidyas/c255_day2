#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
	unsigned int num, power;
	unsigned long long int binary;
	while (1)
	{
		cin >> num;
		binary = 0;
		power = 0;
		while (num)
		{
			binary += (num % 2) * pow(10, power);
			num >>= 1;
			power ++;
		}
		cout << binary << "\n";
		
	}
}

