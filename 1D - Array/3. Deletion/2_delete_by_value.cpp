#include <iostream>
using namespace std;

int main() {

  int n,a[10],val,i,flag=0;


  cout<<"\t\t\t\tWelcome to The Concept of DELETION from ARRAY\n";

  int size = sizeof(a)/sizeof(a[0]);

  cout<<"\nSize of declared array is "<<size;

//---------------user input----------------------------------------


  cout<<"\nEnter length of array (No of element u want to store in ARRAY)\n";
  cin>>n;
  cout<<"\nEnter "<<n<<" elements"<<"\n";
  for(int i=0;i<n;i++)
  {

      cin>>a[i];

  }

  cout<<"\nEntered elements are\n";

  for(int i=0;i<n;i++)
  {

      cout<<a[i]<<"\n";

  }

  //-----------------Deletion process----------------------------

    cout<<"\n\tEnter DETAILS of element u want to  Delete\n";


    cout<<"\n1. Enter the value of element to be deleted "<<"\n";
    cin>>val;


            for(int i=0;i<n;i++)
            {
                  if(val==a[i])
                  {
                      flag=1;
                      for(int j=i;j<n-1;j++)
                      {

                          a[j]=a[j+1];

                      }

                  }


            }

      if(flag==1){




            n=n-1;

      //--------------Display the updated array after deletion ----------------
        cout<<"\nArray After deletion at end is \n";

          for(int i=0;i<n;i++)
          {

              cout<<a[i]<<"\n";

          }



    }

if(flag==0){

  cout<<"This value  is not present in the array";
}






return 0;
}
