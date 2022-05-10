#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cout<<"Please provide a value for n"<<endl;
  cin>>n;
  cout<<endl;
  int m = n;
  int i = 1;
  
  int count = 0;
  while(n>10)
  {
      n/=10;
      count++;
  }
  while(count>0)
  {
      i*=10;
      count--;
  }
  int x = n * i;
  m = m - x;
  m*=10;
  n = m + n;
  cout<<n;
  
  return 0;
}

