#include <iostream>
using namespace std;

	int main() {
		
	int x;
	string y;
	
	cout << "Write something: \n";
	getline(cin, y);
	cout << "Input value: \n";
	cin >> x;
	
	do{
		
		cout << y << "\n";
		x--;
	
	}
	while(x > 0);
	
	
	
	
	}