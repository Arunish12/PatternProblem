/*Note : size = 5 for the pattern given below
A B C D E
A B C D E
A B C D E 
A B C D E
A B C D E 
*/
#include<iostream>
using namespace std;

int main() {
     int n;
     cout <<"Enter the value of n : ";
     cin >> n;
     
     for(int i =1; i<=n; i++){
        for(int j =1; j<=n; j++){
         char ch = 'A'+j-1;
         cout << ch<<" ";
          
        }
        cout <<endl;
     }
    return 0;
}