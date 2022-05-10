#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	int half_n;
	int odd = 0;

	cin >> n;
	half_n = ceil((double)n / 2);
	odd = n % 2 == 1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n * 2 - 2; j++)
		{
			if ((j == i || i + j == n + odd) && i <= half_n ||
				(j == i + n - 2 || i + j == 2 * n - odd) && i > half_n - odd)
				cout << "*";
			else
				cout << "-";
		}
		cout << "\n";
	}
}

