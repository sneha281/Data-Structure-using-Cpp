#include <iostream>
using namespace std;

int main() {

  int n,a[10],pos,val;


  cout<<"\t\t\t\tWelcome to The Concept of INSERTION AT END OF ARRAY\n";

  int size = sizeof(a)/sizeof(a[0]);

  cout<<"\nSize of declared array is "<<size;

//---------------user input----------------------------------------


  cout<<"\nEnter length of array (No of element u want to store in ARRAY)\n";
  cin>>n;
  cout<<"\nEnter "<<n<<" elements"<<"\n";
  for(int i=0;i<n;i++){

    cin>>a[i];

  }

  cout<<"\nEntered elements are\n";

  for(int i=0;i<n;i++){

    cout<<a[i]<<"\n";

  }

  //-----------------Insertion process----------------------------

  cout<<"\n\tEnter DETAILS of element u want to INSERT\n";


  //  cout<<"\n1. Enter the position of element && position must be <= "<<n<<"\n";
  //  pos = n;
  //  cin>>pos;

    if(pos > n )
    {

      cout<<"Insertion not possible at this position because length of array is "<<n<<"\n";

    }

  cout<<"\nEnter the value  \n";
  cin>>val;

  if(val >= size){
    cout<<"Insertion not possible at this position because size of array is "<<size<<"\n";
  }

  else
  {




    for(int i=n;i>val;i--){
      a[i]=a[i-1];

    }
    a[val-1] = val;
    n=n+1;

    //--------------Display the updated array after insertion ----------------
    cout<<"\nArray After Insertion at end is \n";

    for(int i=0;i<n;i++){

      cout<<a[i]<<"\n";

    }

  }


return 0;
}
