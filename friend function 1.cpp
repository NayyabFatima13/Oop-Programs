#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;
        friend int addFive(Distance);  // friend function
    public:
        Distance() : meter(0) 
		{
			
		}

};
int addFive(Distance d) {     // friend function definition

    d.meter = 5;  //accessing private members from the friend function
    return d.meter;

}

int main() {

    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;

}
