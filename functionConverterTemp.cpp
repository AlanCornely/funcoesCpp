#include <iostream>

//declarar função
double cParaf( double celsius){
    return (celsius * 9 / 5) + 32;
}

using namespace std;
int main(){

    double temperatura;
    cout << "digite um numero em celsius: ";
    cin >> temperatura;

    printf("%.2f graus Celsius é equivalente a %.2f graus Fahrenheit\n", temperatura, cParaf(temperatura));

    return 0;
}