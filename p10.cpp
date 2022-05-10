#include<iostream>
using namespace std;
int main ()
{
    int n, size,first;
    cout<<"Please Enter a value for n ";
    cin >> n;
    first = n;
    size = 1;

    while (first >= 10)
    {
        first = first/10;
        size = size*10;
    }

    n = n - (first * size);
    n = (n * 10) + first;

    cout << n;
}

