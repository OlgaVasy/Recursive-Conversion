/* P. 946 Ch. 2: Recursive Conversion*/
// This program converts the function to one that uses recursion.

#include <iostream>
using namespace std;

//Function prototype
void sign(int n);

int main() {

	int n;
	cout << "Please enter the number of repetitions: ";
	cin >> n;
	sign(n);
	system("PAUSE");
	return 0;
}

void sign(int n) {

	if (n > 0) {
		cout << "No parking\n";
		sign(n-1);
	}
}