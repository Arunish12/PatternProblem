/*Size is constant
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
*/
#include<iostream>
using namespace std;

int main() {
     int n;
     cout <<"Enter the value of n : ";
     cin >> n;
     char ch = 'A';
     for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
          cout << ch <<" ";
          ch++;
        }
        cout << endl;
     }
    return 0;
}