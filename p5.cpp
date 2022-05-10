#include <iostream>

using namespace std;

void drawRow (int length, int a) {
	int start, finish;
	start = a;
	finish = length - a + 1;
	
	if (start > finish){
		start = finish;
		finish = a;
	}
	for (int j = 1; j <= length; j++)
	{
		if (j < finish && j > start){
			cout << " ";
		}
		else
		{
			cout << "*";
		}
	}
	cout << "\n";
}

int main()
{
	int i, n, length;
	while (1)
	{
		cin >> n;
		for (i = 1; i <= n; i++){
			drawRow (n, i);
		}	
	}
	return 0;
}

