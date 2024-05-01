#include <iostream>

//declarar função de area
int calcularAreaQuadrado (int lado){
    return lado * lado;
}

using namespace std;
int main(){

    int lado;
    cout << "digite um numero para a área do quadrado: ";
    cin >> lado;
    
    int area = calcularAreaQuadrado(lado);
    printf("a área do quadrado é %d\n", area);

    return 0;
}