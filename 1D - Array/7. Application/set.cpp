#include <iostream>
using namespace std;

int main()
{
  int n,i,j,a[100000],flag=0,pos,val;


  cin>>n;

  for( i=1;i<=n;i++)
  {
    cin>>a[i];
  }


cin>>pos;
cout<<"Enter The element\n";
cin>>val;


if(pos<=n&&pos!=0)
{
for( j=pos;j<=pos;j++)
{
      a[j]=val;

}
}
else
{
  cout<<"enter correct position";
}

for( j=1;j<=n;j++)
{
      cout<<a[j]<<"\n";

}




return 0;
  }
