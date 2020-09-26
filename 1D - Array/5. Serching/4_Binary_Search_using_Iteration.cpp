#include <iostream>

using namespace std;

int main() {
	// your code goes here

    int n,a[100],i,val,flag=0,count=0,l,h,mid;

    cout<<"\t\t\t\t\t\tBINARY SEARCH (Iteration Method)\n";

    cout<<"\nEnter the Length of array\n";
    cin>>n;

    cout<<"\nEnter the array  element in sorted order\n";
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

    l=0;
    h=n-1;

    cout<<"value of l outside the while loop = "<<l<<"\n";
    cout<<"value of h outside the while loop = "<<h<<"\n";


    //-------------------- BINARY SEARCH STARTS -------------------------------
    while(l<=h)
    {
        mid=(l+h)/2;

      if(a[mid]==val){
        cout<<"element found at position "<<mid+1<<"\n";
        cout<<"value of l inside the while loop = "<<l<<"\n";
        cout<<"value of h  inside the while loop = "<<h<<"\n";

        break;

      }
      else
      {

        if(val>a[mid]){
          l=mid+1;

        }
        else{
          h=mid-1;
        }

      }
    }

    if(l>h){
      cout<<"Element not found!!!";

    }



return 0;
}
