#include <iostream>
using namespace std;

int main()
{
  int n,i,j,a[100000],flag=0;


  cin>>n;

  for( i=1;i<=n;i++)
  {
    cin>>a[i];
  }



cout<<"Enter The position of element\n";
cin>>i;


if(i<=n-1&&i!=0)
{
for( j=i;j<=i;j++)
{
        cout<<"Element present at that index is ";
        cout<<a[j];
}
}
else
{
  cout<<"enter correct position";
}






return 0;
  }
