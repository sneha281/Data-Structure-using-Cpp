#include <iostream>
using namespace std;
int main()
{

// 2. By using cin.get() method in C++ "Best way of taking string as input"

char str1[100],newstr[100];

cout<<"Enter the string\n";
cin.get(str1,100);


// taking multiple string inputs

cin.get(); // \n will remain in the buffer after the first cin. You can solve this problem by adding an empty cin.get()



cout<<"\nEnter another string\n";
cin.get(newstr,100);

cout<<"\nEntered String are\n";
cout<<str1<<"\n";
cout<<newstr;
return 0;
}
