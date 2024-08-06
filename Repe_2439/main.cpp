#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

int main(void) {
	int count;	
	cin >> count;

	for (int i = count; i > 0; i--) {
		cout << setw(i);
		
		for (int j = 0; j <= count - i; j++) {
			cout << "*";
		}

		cout << endl;
	}
}