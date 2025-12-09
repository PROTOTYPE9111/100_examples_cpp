// вычисление размера типа int,float, double, char в системе

#include <iostream>
using namespace std; 

int main(){
    cout << "Размер char: " << sizeof(char) << " byte" << endl;
    cout << "Размер int: " << sizeof(int) << " bytes" << endl;
    cout << "Размер float: " << sizeof(float) << " bytes" << endl;
    cout << "Размер double: " << sizeof(double) << "  bytes" << endl;

    return 0;
}