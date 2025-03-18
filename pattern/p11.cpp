/*
1 <= size <= 20
Note: size is 5 for the pattern given below
         *
       * *
     * * * 
   * * * * 
 * * * * * 
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
    
     for(int i = 1; i<=n; i++){
         int space = n-i;
        while(space){
            cout <<"  ";
            space = space-1;
        }
        for(int j = 1; j<=i; j++){
            cout <<"*"<<" " ;
        }
        cout << endl;
     }

    return 0;
}