#include <iostream>
using namespace std;

int main()
{
  int n,i,a[100000],pos;


  cin>>n;

  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }

  cout<<"\nEnter the position of shifting\n";
  cin>>pos;

    if(pos>=n)
    {
      cout<<"\n Shifting not possible at this pos\n";

    }
    else
    {
      for( i=n-1;i>=0;i--)
      {


            a[i]=a[i-pos];

            cout<<i<<"-->"<<a[i]<<"\n ";
      }
    }


    // displaying reversed Array

  for( i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }



return 0;
  }
