#include <iostream>
using namespace std;

int main()
{
  int n,i,j,a[100000],flag=0,count=0;


  cin>>n;

  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }



  for( i=0;i<n;i++)
  {

      for( j=i+1;j<n;j++)
      {
        if(a[i]==a[j])
        {
          flag =1;
          cout<<"Duplicate number is "<<a[i]<<"\n";

          count++;
        }

      }

  }
  if(flag==0){
    cout<<"No duplicate Number found";
  }

  cout<<"Total number of duplicate elemnts in array are"<<count;



return 0;
  }
