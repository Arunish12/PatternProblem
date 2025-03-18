/*1  2  3  4
5  6  7  8
9  10 10 9 
8  7  6  5
4  3  2  1
*/
#include<iostream>
using namespace std;

int main() {
     int n;
     cout <<"Enter the value of n : ";
     cin >> n;
     int cnt = 1;
     for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
           cout << cnt <<" ";        
            cnt++;
        }
        cout << endl;
     }

    return 0;
}