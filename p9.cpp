#include <iostream>

using namespace std;

int main()
{
	int n;
	int cpy;
	int count = 1;

	cin >> n;
	cpy = n;
	
	while (n / 10 > 0)
	{
		count *= 10;
		n /= 10;
	}
	cout << cpy % count * 10 + cpy / count;
}

