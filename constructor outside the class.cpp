#include <iostream>
#include<conio.h>
using namespace std;
class Example {       // Class Declaration
   int a, b;
   //Access - Specifier
public:
   //Constructor declaration
   Example();

   //Member Functions for display 'a & b' Values.

   void Display() {
      cout << "Values :" << a << "\t" << b;
   }
};

// Constructor definition outside Class
Example::Example() {
   // Assign Values In Constructor
   a = 10;
   b = 20;
   cout << "Im Constructor : Outside Class\n";
}

int main() {
   cout << "Simple Constructor Outside Class Declaration Example Program In C++\n";

   // Object Creation For Class
   Example Object;
   // Constructor invoked.
   Object.Display();

   // Wait For Output Screen
  // getch();
   return 0;
}
