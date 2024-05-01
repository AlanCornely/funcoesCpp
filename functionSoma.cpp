#include <iostream>

//declarar função
int soma (int a, int b){
    return a + b;
}

using namespace std;
int main(){

    int num1;
    cout << "digite um numero: ";
    cin >> num1;
    
    int num2;
    cout << "digite um segundo numero: ";
    cin >> num2;

    int somar = soma(num1, num2);
    cout << "a soma é:" << somar << endl;

    return 0;
}