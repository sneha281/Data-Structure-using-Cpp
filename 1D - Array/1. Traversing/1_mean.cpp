#include <iostream>
using namespace std;

int main() {
	// your code goes here

  // Code to find out MEAN of the number given by user

  int n,a[100],sum=0;

  cin>>n;


  for(int i=0;i<n;i++){

    cin>>a[i];

    sum= sum+a[i];

  }

  cout<<"Sum of the above number is "<<sum<<"\n";
  int res = sum/n;

  cout<<"Mean of the given the entered number is  "<<res;





return 0;
}
