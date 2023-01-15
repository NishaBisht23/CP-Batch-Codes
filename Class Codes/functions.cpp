#include<bits/stdc++.h>
using namespace std;

bool is_Adult(int age){
    if(age >= 18){
        return true;
    }
    return false;
}
int main(){
    int age;
    cin >> age;

    if(is_Adult(age) ){
        cout << "You are eligible to vote " << endl;
    }
    else{
        cout << "Please come back after " << 18 - age << " years." << endl;
    }
}