#include<bits/stdc++.h>
using namespace std;


template<class X_TYPE> // X_TYPE is the name of variable now we can use the template in display function and can use it to print vector of any data type

void display_vector(vector<X_TYPE> &vec){ //if we will write "vector<int> vec" it will create a copy of the vector and the vector can be very large in size and a lot of memory will get wasted so just passed the vector by reference
    // for(int i = 0; i < vec.size(); i++){
    //     cout << vec[i] << " ";
    // }

    //WE CAN ALSO USE FOR EACH LOOP

    // for(int element : vec){
    //     cout << element << " ";     //this element access is by value not by reference so if we will update any value here, it will not affect the original vector
    // }

    for(auto element: vec){ // it will accept the data irrespective of the data type
        cout << element << " ";
    }
    cout << endl;
}

int main(){
    vector <int> v1; //declaration
    vector <int> v2 = {45, 78};     //vector can be of any specific data type
    v1.push_back(11);     //will add 1 to the end of the vector
    v2.push_back(29);

    vector <int> v3(10, 5); // 10 elements having default values as 5

    display_vector(v1);
    display_vector(v2);
    display_vector(v3);

    cout << "Size of vector 1: " << v1.size() << endl;
    cout << "Size of vector 2: " << v2.size() << endl;
    cout << "Size of vector 3: " << v3.size() << endl;

    //2 D Vectors

    //Both ways are correct as v1 is already a 1D vector
    vector<vector<int> > vec1(5, v1);
    vector<vector<int> > vec2(5, vector<int>(4, 9));

    //Traversing a 2D vector
    for(int i = 0; i < vec2.size(); i++){
        for(int j = 0; j < vec2[i].size(); j++){
            cout << vec2[i][j] << " ";
        }
        cout << endl;
    }
    //Using For Each Loop
    for(auto column : vec2){
        for(auto element : column){
            cout << element << " ";
        }
        cout << endl;
    }

    return 0; 
}