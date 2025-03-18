/*1 <= size <= 20
Note: size is 10 for the pattern given below

* 
*  * 
*    * 
*      * 
*        * 
*      *
*    * 
*  * 
* 
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "*"; 
        if (i > 0) { 
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*"; 
        }
        cout << endl; 
    }

    for (int i = n - 2; i >= 0; i--) {
        cout << "*"; 
        if (i > 0) { 
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*"; 
        }
        cout << endl; 
    }

    return 0;
}
