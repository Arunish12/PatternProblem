/*1 <= size <= 20
Note: size is 5 for the pattern given below

        A
      A B A 
    A B C B A
  A B C D C B A
A B C D E D C B A
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
     for(int i=0; i<n; i++){
        int space = n-i-1;
        while(space){
            cout <<"  ";
            space = space-1;
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j <= i) {
                char ch = ('A' + j);
                cout << ch  << " ";
            } else {
                char ch1 = ('A' + (2 * i - j));
                cout << ch1 << " ";
            }
        }
        cout <<endl;
     }
    return 0;
}