#include<bits/stdc++.h>
using namespace std;
int main(int argc, char ** arg ){
    int units;
    cin >> units;
    int charges = 0;
    if(units >= 0 && units < 100){
        charges = 0;
    }
    else if(units >= 100 && units < 200){
        charges = (units - 100) * 5;
    }   
    else if(units >= 200 && units < 300){
        charges = 100 * 5 + (units - 200) * 10;
    } 
    else{
        charges = 100 * 5 + 100 * 10 + (units - 300) * 12;
    }
    cout << charges << endl;
    return 0;
}