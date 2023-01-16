#include<bits/stdc++.h>
using namespace std;

void display_3d(vector<vector<vector<int>>> vec){
    for(auto matrix : vec){
        for(auto col : matrix){
            for(auto element : col){
                cout << element << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
int main(){
    vector<int> cells;
    cells.reserve(5);
    //If we won't reserve the cells then it will allocate the default capacity

    for(int i = 0; i < 100; i++){
        cells.push_back(i);
        cout << cells[i] << " " << cells.size() << " " << cells.capacity() << endl;
        //vectors are able to keep the elements in the consecutive locations becuase they double the amount of capacity than what they already have so that the user can enter the elements
    }

    //Multi dimensional vectors
    vector<int> linear = {1,2,3,4,5};

    vector<vector<int>> twodimensional = {linear, linear, linear};

    vector<vector<vector<int>>> threedimensional = {twodimensional, twodimensional, twodimensional, twodimensional};

    display_3d(threedimensional);
    return 0;
}