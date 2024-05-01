#include <iostream>

//declarar função
int fatorial(int num){
    int resultado = 1;
    for (int i= 2; i <= num; ++i){
        resultado *= i;
    }
    return resultado;
}

using namespace std;
int main(){

    int num;
    cout << "digite um numero: ";
    cin >> num;

    printf("o fatorial de %d é: %d\n", num, fatorial(num));

    return 0;
}