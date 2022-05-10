#include <iostream>

using namespace std;

int main()
{
	int n = 4;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2*n) - 1; j++)
        {
            if (j <= i)
                std::cout << j;
            else if ( j > 2 * n - i - 1)
                std::cout <<  2 * n - j ;
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}
