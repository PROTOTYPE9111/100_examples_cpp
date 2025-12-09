//Сложение двух чисел

#include <iostream>
using namespace std; 

int main(){
    int first, second, sum;

    cout << "Введите два целых числа: ";
    cin >> first >> second;
    
    // Вычисляем сумму
    sum = first + second;

    // Выводим
    cout << first << " + " << second << " = " << sum << endl;

    return 0;
}