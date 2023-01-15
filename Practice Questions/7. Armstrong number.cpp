#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int n1 = n;
	int count = 0;
	
	while(n1 != 0){
	    count++;
	    n1 /= 10;
	}
	
	int num = n;
	int sum = 0;
	
	while(num > 0){
	    int d = (num % 10);
	    sum += pow(d, count);
	    num = num / 10;
	}
	
	if(sum == n){
	    cout << "Yes";
	}
	else{
	    cout << "No";
	}
}