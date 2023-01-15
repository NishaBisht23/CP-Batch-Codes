#include <iostream>
using namespace std;

int main() {
	int binary;
	cin >> binary;
	
	int decimal = 0;
	int power = 1;
	while(binary > 0){
	    decimal += (binary % 10) * power;
	    power *= 2;
	    binary /= 10;
	}
	cout << decimal << endl;
	return 0;
}