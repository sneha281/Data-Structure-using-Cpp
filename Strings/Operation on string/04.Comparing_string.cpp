#include <iostream>
#include <cstring>

using namespace std;
int main()
{

char str1[100],str2[100],flag=0;
int i=0,j=0,str1length=0,str2length=0;

cout<<"Enter String 1 \n";
cin.get(str1,100);

cin.get();

cout<<"\nEnter String 2\n";
cin.get(str2,100);



str1length = strlen(str1);
str2length = strlen(str2);



    if(str1length==str2length)
    {

          while(str1[i]!='\0' && str2[j]!='\0')
          {
              if(str1[i] == str2[j])
              {
                  flag=0;
              }
              else
              {
                  flag=1;
                  break;
              }

                i++;
                j++;
          }

    }
    else
    {
          flag=1;
    }


if(flag==0)
{
    cout<<"\nsting is equal";
}
else
{
  cout<<"\nString is not equal";
}
return 0;
}
