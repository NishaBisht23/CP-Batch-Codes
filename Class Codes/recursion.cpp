#include<bits/stdc++.h>
using namespace std;

void countDown(int counter){
    if(counter == 0){
        return;
    }
    cout << counter << endl;
    counter--;
    countDown(counter);
}
int main(){
    int counter;
    cin >> counter;

    countDown(counter);
}