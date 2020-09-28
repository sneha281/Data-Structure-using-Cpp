#include <iostream>
using namespace std;

int main()
{
  int n,i,j,a[100000],b[100000],flag=0,count=0;


  cin>>n;

  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }


  for( i=0;i<n;i++)
  {
    for( j=i;j<=i;j++)
    {
        b[j]=a[i];
        //cout<<b[j];
    }
  }

  for( i=0;i<n;i++)
  {

      for(j=n-i-1;j>=n-i-1;j--)
      {
          a[i] = b[j];
      }
  }

  for(i=0;i<n;i++)
  {

      cout<<a[i]<<" ";
  }


return 0;
  }
