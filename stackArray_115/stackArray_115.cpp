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

	string push(string element) {
		if (top == 4) {	//step 1
			cout << "Number of data exceeds the limit" << endl;
			return "";
		}

		top++; //step 2
		stack_array[top] = element; //step3
		cout << endl;
		cout << element << "ditambah(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) { //step4
			cout << "\nstack is empty. cannot pop." << endl;	//1a
			return; //1.b
		}

		cout << "\nthe poped element is : " << stack_array[top] << endl; //step2
		top--; //step 3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty())
			cout << "\nstack is empty." << endl;

		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	stackArray s;
	while (true) {
		cout << endl;
		cout << "\n**stack menu**\n";
		cout << "1. push\n";
		cout << "2. pop\n";
		cout << "3. display\n";
		cout << "4. exit\n";
		cout << "\nEnter your choice: ";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
		switch (ch) {
		case '1': {
