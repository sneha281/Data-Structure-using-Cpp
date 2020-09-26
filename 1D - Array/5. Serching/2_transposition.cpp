#include <iostream>

using namespace std;

int main() {
	// your code goes here

    int n,a[100],i,val,flag=0,count=0,temp,t,j,length;

      cout<<"\n\t\t\t\t\t\t TRANSPOSITION \n";

      cout<<"\nEnter The Length of Array\n";
      cin>>length;
      cout<<"\nEnter Elements of Array\n";
      for(i=0;i<length;i++){
      cin>>a[i];

     }
       cout<<"\nElements of Array are\n";
     for(i=0;i<length;i++){
      cout<<a[i]<<"\n";

     }


     cout<<"\nhow many value u want to search\n";
     cin>>n;

    for(j=0;j<n;j++)
    {

      cout<<"\nEnter element to be search\n";
      cin>>val;

    for( i=0;i<length;i++)
    {

          if(val==a[i])
          {  flag=1;
                temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
                cout<<"\nElement found !!! at "<<"pos = "<<i<<"\n";

          }
    }


    if(flag==0){
    cout<<"\nElement not found\n";
  }
  else{
    cout<<"\nNow Elements in Array are\n";

    for( i=0;i<length;i++)
    {
        cout<<a[i]<<"\n";
    }

  }
}
return 0;
}
