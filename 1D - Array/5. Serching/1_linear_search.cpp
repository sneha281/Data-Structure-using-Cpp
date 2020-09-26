#include <iostream>

using namespace std;

int main() {
	// your code goes here

    int n,a[100],i,val,flag=0,count=0;

    cout<<"\t\t\t\t\t\tLINEAR SEARCH\n";

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

    cout<<"Enter element to be search\n";
    cin>>val;

    for( i=0;i<n;i++)
    {

      if(val==a[i])
      {
          flag=1;
          cout<<"\nElement found at position "<< i+1;
      }

    }

    if(flag==0){
    cout<<"Element not found\n";
  }
  cout<<"\nNo of comparison required for searching  "<<count;

return 0;
}
