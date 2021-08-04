#include <iostream>

using namespace std;

int f (int x){
    int valor;
    valor = x*x - 3*x + 5;
    return valor;
}

int main(){
    int a;
    cout << "Diga um numero inteiro nao negativo: \n";
    cin >> a;
    int valorf = f(a);
    cout << "O valor da funcao no ponto" <<  a  << "e igual a" << valorf << endl;

    return 0;
}