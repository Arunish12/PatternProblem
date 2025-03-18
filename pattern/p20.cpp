/*1 <= size <= 20
Note: size is 5 for the pattern given below

          *
        *   * 
      *       * 
    *           * 
  * * * * * * * * * 
*/

#include<iostream>
using namespace std;

int main() {
     int n;
     cout <<"Enter the value of n : ";
     cin >> n;
     if(n < 1 || n > 20 ){
        cout <<"Invalid size! ";
        return 1;
     }
      for (int i = 0; i < n; i++) {
      
        for (int space = 0; space < n - i - 1; space++) {
            cout << "  ";
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            if(i == n-1 || j == 0 || j == 2 * i){
                cout <<"* ";
            }
            else{
                cout <<"  ";
            }
        }

        cout << endl; 
    }

    return 0;
}