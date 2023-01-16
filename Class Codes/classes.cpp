#include<bits/stdc++.h>
using namespace std;

class Marvel{
    private:
        int a;
        int b;
    protected:
        int c;
    public:
        void print_info(){
            cout << "Marvel : " << a << " " << b << " " << c << endl;
        }
};

class Character : public Marvel{
    
};

int main(){
    Marvel thor;
    cout << sizeof(thor) << endl;
    cout << sizeof(Marvel) << endl;

    // cout << thor.a << endl; // Not allowed
    // cout << thor.b << endl; // Not allowed
    // cout << thor.c << endl; // Not allowed
    thor.print_info(); 
    return 0;
}