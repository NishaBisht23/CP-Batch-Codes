#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> solar_system = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    //Iterators always iterate in forward direction
    vector<string>::iterator planets = solar_system.begin();
    //we can also write the above line as
    //auto planets = solar_system.begin(); // and the auto keyword will identify the type of planets
    //but it is recommended to use auto less times because it makes the code less readable for human developers
    
    for(; planets != solar_system.end(); planets++){
        cout << *planets << " ";
    }
    cout << endl;
    
    //Reverse iterators always iterates backwards

    vector<string> :: reverse_iterator sun = solar_system.rbegin();

    for(; sun != solar_system.rend(); sun++){
        cout << *sun << " ";
    }
    cout << endl;

    //Using forward iterators to print backwards

    planets = solar_system.end() - 1;
    
    for(; planets >= solar_system.begin() ; planets--){
        cout << *planets << " ";
    } 
    cout << endl;   


}