#include <iostream>
using namespace std;

int main()
{
  int n,i,j,a[100000],flag=0,count=0,temp=0,mid,l,h;


  cin>>n;

  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }

  // reversing an array by swaping

  l=0;
  h=n-1;

  mid=(l+h)/2;

  for( i=0;i<=mid;i++)
  {

      for(j=n-i-1;j>=n-i-1;j--)
      {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

      }

  }

    // displaying reversed Array

    for( i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }



return 0;
  }
