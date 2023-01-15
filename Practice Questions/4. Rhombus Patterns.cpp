// //SOLID RHOMBUS
// #include <iostream>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	int row = 1;
// 	while(row <= n){
// 	    int spaces = 1;
// 	    while(spaces <= (n - row)){
// 	        cout << " ";
// 	        spaces++;
// 	    }
// 	    int stars = 1;
// 	    while(stars <= n){
// 	        cout << "*";
// 	        stars++;
// 	    }
// 	    cout << endl;
// 	    row++;
// 	}
// }
// //HOLLOW RHOMBUS
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int spaces = 1;
        while (spaces <= (n - row))
        {
            cout << " ";
            spaces++;
        }

        int stars = 1;
        if (row == 1 || row == n)
        {
            while (stars <= n)
            {
                cout << "*";
                stars++;
            }
        }
        else
        {
            while (stars <= n)
            {
                if (stars == 1 || stars == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                stars++;
            }
        }

        cout << endl;
        row++;
    }
}