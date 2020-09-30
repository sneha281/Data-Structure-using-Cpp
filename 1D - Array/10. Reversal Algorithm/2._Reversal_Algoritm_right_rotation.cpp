#include <iostream>
using namespace std;

void swap (int a[],int s,int j)
{
  int l=s,h=j,i,temp;

   while(l<h)
   {
        temp=a[l];
        a[l]=a[h];
        a[h]=temp;

        l++;
        h--;
    }
}

void reversal(int a[] ,int n,int pos){

    if(pos>n)
    {
      pos=pos-n;
    }
  swap(a,n-pos,n-1);
  swap(a,0,n-pos-1);
  swap(a,0,n-1);

}


int main()
{
  int n,i,a[100000],pos,temp,j,flag=0;

  cout<<"\t\t\t\tREVERSAL ALGORITM FOR RIGHT ROTATION IN ARRAY\n";


  cout<<"\nEnter the length of array\n";
  cin>>n;

  cout<<"\nEnter the elemnts\n";
  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }

  cout<<"\nEnter the Number of Left ROTATION\n";
  cin>>pos;

  if(pos==n)
  {
    flag=1;

  }

  if(flag==0)
  {
      reversal(a,n,pos);
  }

  cout<<"\nArray After Left Rotation\n";
  for( i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }

  return 0;
}
