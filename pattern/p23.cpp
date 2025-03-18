/*1 <= size <= 20
Note: Size is 5 for the pattern given below

* * * * * * * * *
* * * *   * * * * 
* * *       * * *
* *           * *
*               *
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the n value: ";
    cin >> n;

    // Validate input
    if (n < 1 || n > 20) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    

    return 0;
}
