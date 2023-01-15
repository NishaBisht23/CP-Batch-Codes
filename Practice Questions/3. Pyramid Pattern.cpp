#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int row = 1;
	while(row <= n){
	    int stars = 1;
	    while(stars <= row){
	        cout << "* ";
	        stars++;
	    }
	    cout << endl;
	    row++;
	}
}