/*1 <= size <= 20
Note : size is 5 for the pattern given below

  * * * * * * * * * 
   *           *
     *       * 
       *   * 
         *  
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
     for(int i = n ; i >= 1; --i){
        for(int space = 0; space < n - i; space ++){
            cout <<"  ";
        }
        for(int j = 0; j < 2 * i - 1; j++){
            if(i == n || j == 0 || j == 2 * i - 2){
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