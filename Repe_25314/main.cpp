#include<iostream>

using namespace std;

int main(void) {
	int nbyte;
	cin >> nbyte;
	
	for (int i = 0; i < nbyte / 4; i++) {
		cout << "long ";
	}
	cout << "int";
}