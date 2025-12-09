// Вычисляем частное и остаток

#include <iostream>
using namespace std; 

int main(){
    int dividend,divisor, quotinent, remainder;
    cout << "Делимое: ";
    cin >> dividend;

    cout << "Делитель: ";
    cin >> divisor;

    quotinent = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Частное = " << quotinent << endl;
    cout << "Остаток = " << remainder << endl;

    return 0;
}