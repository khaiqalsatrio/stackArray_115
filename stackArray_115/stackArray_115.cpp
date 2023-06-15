#include <iostream>
#include <string>
using namespace std;

class stackArray {
private:
	string stack_array[5];
	int top;
public:
	//construktor
	stackArray() {
		top = -1;
	}
