/*1 <= size <= 100
Note : size is 5 for the pattern given below
1 3 5 7 9
1 3 5 7 9
1 3 5 7 9
1 3 5 7 9
1 3 5 7 9
*/
#include<iostream>
using namespace std;

int main() {
     int n ;
     cout <<"Enter value of n : ";
     cin >> n;
     if (n < 1 || n > 100) {
        cout << "Invalid size. " << endl;
        return 1;
     }
     for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout << 2*j-1 <<" ";
        }
        cout << endl;
     }
    return 0;
}