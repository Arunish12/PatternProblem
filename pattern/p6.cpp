/*
Size is fixed
A B C A B C 
A B C A B C 
A B C A B C
A B C A B C
*/
#include<iostream>
using namespace std;

int main() {
   int row = 4;
   int col = 6;
    for(int i = 1; i<=row; i++){
        for(int j = 1; j<=col; j++){
            char ch =('A'+(j-1)%3);
            cout << ch  <<" "; 
        }
        cout << endl;
    }
    return 0;
}