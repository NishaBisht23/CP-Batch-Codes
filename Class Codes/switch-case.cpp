#include<bits/stdc++.h>
using namespace std;

char gradeMe(int marks){

    //Using an if-else ladder

    // if(marks >= 90) return 'A';
    // else if(marks >= 80) return 'B';
    // else if(marks >= 70) return 'C';
    // else if(marks >= 60) return 'D';
    // else if(marks >= 50) return 'E';
    // else if(marks >= 40) return 'F';
    // return 'R';

    //Using equivalent switch-case
    switch(marks/10){
        case 10: return 'A';

        case 9: return 'B';

        case 8: return 'C';

        case 7: return 'D';

        case 6: return 'E';

        case 5: return 'F';

        case 4: return 'G';

        default: return 'R';
                
    }
    

}
int main(){
    int marks;
    cout << "Enter marks : ";
    cin >> marks;
    cout << "Your Grade is : " << gradeMe(marks) << endl;
}