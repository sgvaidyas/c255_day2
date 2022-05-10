#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cout<<"Please provide a value for n"<<endl;
  cin>>n;
  cout<<endl;
  
  int x = 1;
  
  while(x<=n)
    x*=2;
    
  x/=2;
    
  while(x>0)
  {
      if(n-x>=0)
      {
          n-=x;
          cout<<1;
      }
      else
        cout<<0;
        
      x/=2;
  }
  
  return 0;
}

