#include <iostream>
using namespace std;

int main()
{
  int n,i,a[100000],pos,temp[100000],j,flag=0;


  cin>>n;

  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }

  cout<<"\nEnter the number of left rotation\n";
  cin>>pos;
  if(pos>n)
  {
     pos=pos-n;

  }

  for(i=0;i<pos;i++){
        temp[i]=a[i];
    }



   if(pos==n)
   {
      flag=1;

   }
   else
   {
      for( i=0;i<n;i++)
      {
            a[i]=a[i+pos];
      }

      i=n-pos;
      j=0;
      while(i<n && j<pos)
      {
        a[i]=temp[j];
        i++;
        j++;
      }

   }



    // displaying reversed Array

    if(flag==1)
    {
          for( i=0;i<n;i++)
          {
            cout<<a[i]<<" ";
          }
    }
    else
    {
          for( i=0;i<n;i++)
          {
              cout<<a[i]<<" ";
          }
    }

return 0;
  }
