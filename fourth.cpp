#include <iostream>
using namespace std;

int main() {
	int x;
	
	cout << "Type a number between 1 to 10: \n";
	cin >> x;
	if(x <= 2) {
		cout << "The number is less or equal to 2";
		return 0;
	}
	else if(x <=5) {
		cout << "The number is less or equal to 5";
		return 0;
	}
	else {
		cout << "The number is over 5";
		return 0;
	}
	
	
	
	
}