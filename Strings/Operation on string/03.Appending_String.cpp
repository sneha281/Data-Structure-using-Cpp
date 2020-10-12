#include <iostream>
using namespace std;
int main()
{


// DISADVANTAGE IS WE CAN NOT RESTICT THE LENGHT OF INPUT STRING


string strobject; // declaring a  string object
string newstr;
cout<<"Enter a string\n";
getline(cin,strobject);

cout<<"enter a new string\n";
getline(cin,newstr);

cout<<"String after APPEND\n";
strobject.append(newstr); // append method in c++ for joining two string
cout<<strobject;

return 0;
}
