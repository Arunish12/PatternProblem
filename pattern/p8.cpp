/*1 <= size <= 100
Note : size is 6 for the pattern given below
1 2 3 4 5 6
6 5 4 3 2 1
1 2 3 4 5 6
6 5 4 3 2 1
1 2 3 4 5 6
6 5 4 3 2 1
*/
#include<iostream>
using namespace std;

int main() {
     int n;
     cout <<"Enter the value of n : ";
     cin >> n;
     if (n < 1 || n > 100) {
        cout << "Invalid size. " << endl;
        return 1;
     }
     for(int i =1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i%2 == 0){
                cout << n - (j-1) <<" ";
            }
            else{
                cout << j  <<" ";
            }
        }
        cout << endl;
     }
    return 0;
}