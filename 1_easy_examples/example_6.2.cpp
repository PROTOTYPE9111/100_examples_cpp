// Меняем местами 2 числа

#include <iostream>
using namespace std; 

int main(){
    int a = 1, b = 2;
    cout << "До замены: " << endl;
    cout << "a = " << a << " b = " << b << endl;

    a = a + b; //  a = 1 + 2 = 3
    b = a - b; //  b = 3 - 2 = 1
    a = a - b; //  a = 3 - 1 = 2
    
    return 0;
}