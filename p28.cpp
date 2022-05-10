#include<iostream>
using namespace std;
int main (){
	int i,j,n;
	cin >> n;
	int current_num=0;
	int temp = 1;
	int next_num=1;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (2 * n) - 1; j++)
		{
			if (i + j >= n + 1 && j - i <= n - 1)
			{
				cout << current_num << "\t";
				temp = next_num + current_num;
				current_num = next_num;
				next_num = temp;
			}
			else
				cout << " \t";
		}
		cout << "\n";
	}
}

