#include<bits/stdc++.h>
using namespace std;

class Example{
    public:
    int n;
    vector<int> a;
    Example(){
        a = vector<int>(10, 5);
        // vector <int> b (100, 0);
        for(auto element : a){
            cout << element << " ";
        }
    }
};
int main(){
    int a;
    cin >> a;
    double b;
    cin >> b;
    int *a_pt = &a;
    double *b_pt = &b;
    
    Example ob;

    //Pointer to a pointer
    int** a_ptpt = &a_pt;

    cout << "Value of a : " << **a_ptpt << endl; // or *(*a_ptpt) // *a_ptpt will give the value  of a_pt i.e the address of a , so again using * will give the value present at that address i.e the value of a
    

    cout << "a: " << a << " b: " << b << endl;
    cout << "a_pt: " << *a_pt << " b_pt: " << *b_pt << endl;

    cout << "Address of a: " << &a << " and " << a_pt << endl; 
    cout << "Address of b: " << &b << " and " << b_pt  << endl;

    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of int * : " << sizeof(int *) << endl;
    cout << "Size of double * : " << sizeof(double *) << endl;

    cout << "Size of Example : " << sizeof(Example) << endl;
    cout << "Size of ob : " << sizeof(ob) << endl;
    cout << "Size of Example * : " << sizeof(Example *) << endl;

    return 0;
}