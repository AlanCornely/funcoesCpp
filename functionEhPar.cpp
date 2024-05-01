#include <iostream>

//declarar função
bool ehPar (int num){
    return num % 2 == 0;
}

using namespace std;
int main(){

    int num;
    cout << "digite um numero: ";
    cin >> num;

    printf("%d é %s\n", num, ehPar (num) ? "par" : "impar");

    return 0;
}