#include <iostream>
#include <cstring>
using namespace std;
int main()
{

char str[100],temp;
int str_length=0,i,j;
cin.get(str,100);

str_length = strlen(str);



i=0;
j=str_length-1;


while(i<j)
{

      temp = str[i];
      str[i] = str[j];
      str[j]  = temp;
      i++;
      j--;

}
cout<<"\nString after reversal\n";
cout<<str;

return 0;
}
