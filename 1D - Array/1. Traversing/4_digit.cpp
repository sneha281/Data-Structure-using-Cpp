#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
  int n,a[100],i;

   float num=0 ;


    cin>>n;

    for( i=0;i<n;i++)
    {
      cin>>a[i];
    }

    i=0;
    while(i<n)
    {
        num=num+a[i]*pow(10,i);
        i++;

    }
    cout<<num;



return 0;
}
