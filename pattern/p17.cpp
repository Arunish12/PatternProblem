/*1 <= size <= 20
Note: The size is 5 for the pattern given below
E D C B A
D C B A
C B A
B A
A
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
        for (int j = 0; j < n - i; j++) {
            char ch = 'E' - j - i;
            cout << ch << " ";
        }
        cout << endl; 
    }
    return 0;
}