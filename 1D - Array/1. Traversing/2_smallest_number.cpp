#include <iostream>
using namespace std;

int main() {
	// your code goes here
  int n,a[100],sum=0,min;

  cin>>n;


  for(int i=0;i<n;i++){

    cin>>a[i];

  }

  min=a[0];
  cout<<"First element of array  is "<<min<<"\n";

    for(int i=0;i<n;i++){

      if(a[i]<min){
        min =a[i];


      }

}
  cout<<"Min value of the above array is = "<<min;




return 0;
}
