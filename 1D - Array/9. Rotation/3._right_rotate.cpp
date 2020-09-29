#include <iostream>
using namespace std;

int main()
{
  int n,i,a[100000],pos,temp,j;

  cout<<"\t\t\t RIGHT ROTATION OF ARRAY ELEMENTS\n";


  cout<<"\nEnter the length of array\n";
  cin>>n;

  cout<<"\nEnter the Elements in array\n";
  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }

  cout<<"\nEnter The number of Elements to be rotated \n";
  cin>>pos;


    //shifting Elements in right side of Array
    for(j=0;j<pos;j++)
    {
        temp=a[n-1];

        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }

        a[0]=temp;
    }

    cout<<"\nElements After Right rotation\n";
    // Displaying Right Rotated Array
    for( i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

return 0;
  }
