#include <bits/stdc++.h>
using namespace std;

class Student{
    int roll_no;
    string name;
    public:
    Student(){}
    Student(int roll_no, string name){
        // Name of constructor should be same as the name of the class
        // Constructor without any arguments is known as default constructor
        // And it is already present in each and every class by default
        //  but if we are creating a new constructor(with or w/o any arguments ) by our own , we are overwriting that constructor
        // Constructors are used to initialize data members
        //Constructor should always be public
        this->roll_no = roll_no; // as "this" is a pointer we can not use the dot operator
        this->name = name;
    }

    void display(){
        cout << "Name of the student: " << this->name << endl;
        cout << "Roll no: " << this->roll_no << endl;
    }

    ~Student(){
        cout << "Destructor Called" << endl;
    }
};

int main()
{   
    // Student student;
    // Student student(21, "Nisha");
    // Student student = Student(21, "Nisha");
    Student* student = new Student(21, "Nisha"); //standard way (we pass the arguments by address)
    //The above standard way is recommended for 2 reasons:
    //1. Prefered to assign memory to the objects at runtime
    //2. When we use any other method to create objects and call constructors, the copy of data is done which is not recommended when there is a large amount of data
    // But using the pointer menthod , we pass the arguments by address, which saves a lot of memory and it is more faster
    student->display(); 
    //Use arrow method to access data members & functions of class pointer
    //Else use dot operator to access data members & functions of object variables
    return 0;
}