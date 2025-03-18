/*1 <= size <= 20
Note: size is 5 for the pattern given below
1 2 3 4 5 
  2 3 4 5 
    3 4 5 
      4 5
        5
*/
#include<iostream>
using namespace std;

int main() {
     int n;
     cout <<"Enter the value of n : ";
     cin >> n;
     if(n < 1 || n > 20){
        cout <<"Invalid size! ";
        return 1;
     }
     for(int i = n; i>=1; i--){
        int space = n-i;
        while(space){
            cout << "  ";
            space = space-1;
        }
        for(int j = 1; j<=i; j++){
          cout << n-i+j<<" " ;
        }
        cout << endl;
     }
    return 0;
}