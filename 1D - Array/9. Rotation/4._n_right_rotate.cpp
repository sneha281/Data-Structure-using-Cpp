#include <iostream>
using namespace std;

int main()
{
  int n,i,a[100000],pos,temp[100],j;

  cout<<"\t\t\t RIGHT ROTATION OF ARRAY ELEMENTS BY Using Auxillary Array (Extra Array)\n";


  cout<<"\nEnter the length of array\n";
  cin>>n;

  cout<<"\nEnter the Elements in array\n";
  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }

  cout<<"\nEnter The number of Elements to be rotated \n";
  cin>>pos;

  if(pos>n)
  {
    pos=pos-n;
  }

  //storing value in temp array

   i=n-1;
   j=0;
   while (i>=n-pos&&j<pos)
   {
     temp[j]=a[i];
     j++;
     i--;
   }

   cout<<"\nElements Stored in Temp[] array are\n";

   for( j=0;j<pos;j++)
   {
       cout<<temp[j]<<" ";
   }

    cout<<"\n";

    //shifting Elements in right side of Array
    for(i=n-1;i>=0;i--)
    {
          if(i>=pos)
          {
            a[i]=a[i-pos];
          }
    }


    // copying the value of temp[] array into array A[]
    i=n-pos;
    j=0;
    while (i<pos&&j<pos)
    {
      a[i]=temp[j];
      j++;
      i--;
    }

    cout<<"\nElements After Right rotation\n";
    // Displaying Right Rotated Array
    for( i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

return 0;
  }
