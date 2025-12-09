// Находим ASCII - значение символа

#include <iostream>
using namespace std; 

int main(){
    char c; 
    cout << "Введите символ: "; 
    cin >> c;
    cout << "ASCII значение: " << int(c) << endl;

    return 0;
}