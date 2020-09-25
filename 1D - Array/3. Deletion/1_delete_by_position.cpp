#include <iostream>
using namespace std;

int main() {

  int n,a[10],pos,i;


  cout<<"\t\t\t\tWelcome to The Concept of DELETION from ARRAY\n";


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


    cout<<"\n1. Enter the position of element to be deleted "<<"\n";
    cin>>pos;

    if(pos < n){

            for(int i=0;i<n;i++)
            {
                  if(pos==i)
                  {
                      
                      for(int i=pos;i<n-1;i++)
                      {

                          a[i]=a[i+1];

                      }

                  }


            }

            n=n-1;

      //--------------Display the updated array after deletion ----------------
        cout<<"\nArray After deletion at end is \n";

          for(int i=0;i<n;i++)
          {

              cout<<a[i]<<"\n";

          }



    }

else{

  cout<<"Invalid position";
}






return 0;
}
