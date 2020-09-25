
#include <iostream>
using namespace std;

int main()
{
  int n,i,a[100000],b[100000],c[100000],m,index=0,l;



  cout<<"\nEnter the size of  array A\n";
  cin>>n;

  cout<<"\nEnter the ELEMENTS for array A\n";
  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }


  cout<<"\nEnter the size of  array B\n";
  cin>>m;

  cout<<"\nEnter the ELEMENTS for array B\n";
  for( i=0;i<m;i++)
  {
    cin>>b[i];
  }

//------------------------------Merging starts---------------------------------

  //copy the elements of Array A[] into Array C[]
  for( i=0;i<n;i++)
  {
    c[index]=a[i];
    index++;
  }

  //copy the elements of Array B[] into Array C[]
  for( i=0;i<m;i++)
  {
    c[index]=b[i];
    index++;
  }

  // merging both the array and Displaying it

  cout<<"\nArray after Merging A[] & B[] \n\n";
  l=m+n;
  for( i=0;i<l;i++)
  {
    cout<<c[i]<<" ";

  }






return 0;
  }
