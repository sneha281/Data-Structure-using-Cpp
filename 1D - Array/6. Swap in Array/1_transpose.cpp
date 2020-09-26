#include <iostream>

using namespace std;

int main() {
	// your code goes here

  int n,a[100],i,val,flag=0,count=0,t,temp;


  cout<<"\nEnter the Length of array\n";
  cin>>n;

  cout<<"\nEnter the unique element\n";
  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }

  cout<<"\nEntered elements are :- \n";
  for( i=0;i<n;i++)
  {
    cout<<a[i]<<"\n";
  }


  cout<<"enter the element you want to transpose\n";

  cin>>t;
  for( i=0;i<n;i++)
  {
      if(t==a[i])
      {
          temp = a[i];
          a[i] =a[i-1];
          a[i-1]=temp;

      }

  }
  cout<<"array after transpose\n";
  for( i=0;i<n;i++)
  {
    cout<<a[i]<<"\n";
  }



return 0;
}
