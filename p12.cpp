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
  while(m>1)
  {
      i*=10;
      m/=10;
  }
  int d = n % 10;
  d*=i;
  n/=10;
  n+=d;
  
  cout<<n;
  
  return 0;
}

