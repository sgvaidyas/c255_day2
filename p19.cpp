#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cout<<"Please provide a value for n"<<endl;
  cin>>n;
  cout<<endl;
  
  int i = 1;
  int sp = n-1;
  sp*=2;
  sp--;
  int spp = sp;
  int j = 1;
  
  while(i<=n)
  {
      i++;
      while(i>j)
      {
          cout<<j;
          j++;
      }
      while(spp>0)
      {
          cout<<" ";
          spp--;
      }
      if(i>n)
        j--;
      while(j>1)
      {
          j--;
          cout<<j;
      }
      
      cout<<endl;
      sp-=2;
      spp = sp;
      j = 1;
      //i++;
  }
  
  return 0;
}

