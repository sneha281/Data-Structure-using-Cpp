#include <iostream>
using namespace std;
int main()
{

// 3. By creating a STRING OBJECT we can take string as a input

// DISADVANTAGE IS WE CAN NOT RESTICT THE LENGHT OF INPUT STRING


string strobject; // declaring a  string object
string newstr;

cout<<"Enter a string\n";
getline(cin,strobject);

cout<<"\nString Entered is \n";
cout<<strobject;

return 0;
}
