#include <iostream>
using namespace std;
int main()
{
char str[100];
int  length=0,i=0;

cout<<"Enter the string\n";

cin.get(str,100);

while(str[i]!='\0')
{
    i++;
    length=i;
}

cout<<"\nThe length of string is = "<<length;


return 0;
}
