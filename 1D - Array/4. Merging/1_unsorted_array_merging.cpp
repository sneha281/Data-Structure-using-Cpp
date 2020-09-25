#include <iostream>
using namespace std;

int main()
{
  int n,i,a[100000],b[100000],c[100000],m,index=0,l,j,k,count1,count2,lef,lef2;



  cout<<"\nEnter the size of  array A\n";
  cin>>n;

  cout<<"\nEnter the ELEMENTS for array A\n";
  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }



  cout<<"\nEnter the size of  array B\n";
  cin>>m;
  cout<<"\nEnter the ELEMENTS for array B\n";
  for( j=0;j<m;j++)
  {
    cin>>b[j];
  }

//------------------------------Merging starts---------------------------------

    i=0,j=0,count1=0,count2=0;

  //Sorting + Merging

    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[index]=a[i];
            i++;
            index++;
            count1++;
        }
        else
        {
            c[index]=b[j];
            j++;
            index++;
            count2++;
        }
  }

//IF Element LEFT AND PRESRENT AT LAST index OF array a[]
  if(count1!=n)
  {
    for(i=count1;i<n;i++)
    {
        c[index] = a[i];
        index++;
    }
  }
  //IF Element LEFT AND PRESRENT AT LAST index OF array B[]

  if(count2!=m)
  {
    for(j=count2;j<m;j++)
    {
        c[index] = b[j];
        index++;
    }
  }

  //display the all the merged element
  cout<<"\nArray after Merging A[] & B[] \n\n";
  l=n+m;
  for( k=0;k<l;k++)
  {
    cout<<c[k]<<" ";
  }

return 0;
  }
