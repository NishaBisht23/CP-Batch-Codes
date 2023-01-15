#include<bits/stdc++.h>
using namespace std;

void atm_Balance(int money){
    cout << "You have now " << money << " in your wallet." << endl;
}

//Pass by value
void local_Fund_Scheme(int money){
    money = money * 2;
}

//Pass by address
void nisha_Fund_Scheme(int *money){
    *money = *money * 2;
}

//Pass by reference
void chunnu_Fund_Scheme(int &money){
    money = money * 2;
}

int main(){
    int money;

    cout << "How much money do you have?" << endl;
    cin >> money;

    cout << "Using a local fund scheme - " << endl;
    local_Fund_Scheme(money);
    atm_Balance(money);

    cout << "Using Nisha's fund scheme - " << endl;
    nisha_Fund_Scheme(&money);
    atm_Balance(money);

    cout << "Using Chunnu's fund scheme - " << endl;
    chunnu_Fund_Scheme(money);
    atm_Balance(money);
}