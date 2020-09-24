#include <iostream>
using namespace std;

int main() {
	// your code goes here
  int n,a[100],sum=0,smax,pos,max;



    cin>>n;
    cout<<"enter the number in sorted manner";
    for(int i=0;i<n;i++){

      cin>>a[i];

    }
    // largest
    max=a[0];

    for(int i=0;i<n;i++){

      if(a[i]>max)
      {
        max = a[i];

      }


    }

    //second largest
    smax = a[1];
    for(int i=0;i<n;i++){

        if(a[i]!=max){

          if(a[i]>smax){

            smax=a[i];
          }
    }
}
    cout<<smax;

/*
  // another concept (own concept )

  for(int i=0;i<n;i++){

    cin>>a[i];

  }

  min=a[0];
  cout<<"First element of array  is "<<min<<"\n";

    for(int i=0;i<n;i++){

      if(a[i]!=min){

        min = a[i-1];
        pos = i-1;

      }

}
cout<<"\nSecond largest "<<min<<"\npossition "<<pos;

*/


return 0;
}
