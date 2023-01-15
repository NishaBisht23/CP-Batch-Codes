#include <iostream>
using namespace std;

int main() {
	int a[] = { 9, 5, 4, 9 };
    int b[] = { 2, 1, 4 };
	int size1 = sizeof(a)/ sizeof(int);
	int size2 = sizeof(b)/ sizeof(int);
	int n1 = 0;
	int n2 = 0;
	int power = 1;
	for(int i = size1 - 1; i >= 0; i--){
	    n1 = n1 + a[i] * power;
	    power *= 10;
	}
	power = 1;
	for(int i = size2 - 1; i >= 0; i--){
	    n2 = n2 + b[i] * power;
	    power *= 10;
	}
	
	cout << n1 + n2;
	return 0;
}