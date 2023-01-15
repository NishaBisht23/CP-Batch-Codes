#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    if(a >= b) return a;
    return b;
}


int max(int a, int b, int c){
    if(a >= b && a >= c) return a;
    else if(b >= a && b >= c) return b;
    return c;
}

int max(int a, int b, int c, int d){
    return max(max(a, b), max(c, d));
}

// int max(int a, int b, int c, int d = INT32_MIN){
//     return max(max(a, b), max(c, d));
// }

int main (){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << "Maximum of " << a << " and " << b << " is " << max(a, b) << endl;
    cout << "Maximum of " << a << ", " << b << " and " << c << " is " << max(a, b, c) << endl;
    cout << "Maximum of " << a << ", " << b << ", " << c << " and " << d << " is " << max(a, b, c, d) << endl;

    //Using default arguments
    cout << max(a, b, c, 100); // it will be accepted by the max function having 4 parameters


}