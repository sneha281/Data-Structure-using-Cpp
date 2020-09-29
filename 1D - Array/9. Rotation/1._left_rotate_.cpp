#include <iostream>
using namespace std;

int main()
{
  int n,i,a[100000],pos,temp,j;


  cin>>n;

  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }

      //LEFT ROTATION OF ARRAY BY 1
      cin>>pos;
      for( j=0;j<pos;j++)
      {
      temp = a[0];
      for( i=0;i<n;i++)
      {
            a[i]=a[i+1];
      }
      a[n-1]=temp;
    }


    cout<<"\nArray After 1 left Rotation\n";
    // displaying reversed Array

    for( i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }



return 0;
  }
