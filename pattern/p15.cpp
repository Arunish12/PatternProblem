/*
1 <= size <= 20
Note: size is 5 for the pattern given below
E D C B A
D C B A E
C B A E D
B A E D C 
A E D C B
 */

#include<iostream>
using namespace std;

int main() {
      int n;
     cout << "Enter the value of n : " ;
     cin >> n;
     if (n < 1 || n > 20) {
        cout << "Invalid size. " << endl;
        return 1;
     } 
     for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
           char ch = 'E'-(i + j) % n;
          cout << ch <<" ";
        }
        cout << endl;
     }
    return 0;
}