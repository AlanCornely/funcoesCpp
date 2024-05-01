
//----------------------------------------------
//declarar função de area
int calcularAreaQuadrado (int lado){
    return lado * lado;
}
//----------------------------------------------
//declarar função soma
int soma (int a, int b){
    return a + b;
}
//----------------------------------------------
//declarar função que retorna par
bool ehPar (int num){
    return num % 2 == 0;
}
//----------------------------------------------
//declarar função para fatorial
int fatorial(int num){
    int resultado = 1;
    for (int i= 2; i <= num; ++i){
        resultado *= i;
    }
    return resultado;
}
//----------------------------------------------
//declarar função de converção de temperatura
double cParaf( double celsius){
    return (celsius * 9 / 5) + 32;
}
//----------------------------------------------