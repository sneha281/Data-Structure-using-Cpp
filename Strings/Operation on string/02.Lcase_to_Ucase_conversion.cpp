#include <iostream>
using namespace std;
int main()
{
// Conversion of lowercase char of string to upper case
char str[100],upper[100];
int i=0;
cout<<"Enter the string\n";
cin.get(str,100);


while(str[i] != '\0')
{
    if(str[i]>='a'&&str[i]<='z')
    {
        str[i] = str[i]-32;

    }
    else
    {
      str[i] = str[i];
    }
    i++;
}

cout<<str;


return 0;
}
