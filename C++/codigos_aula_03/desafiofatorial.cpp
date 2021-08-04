#include <iostream>

using namespace std;

// fatorial = a*a-1

int f (int x){
    int valor = 1;
    for (int i=1; i<=x; i++)
    valor *= i;
    return valor;
}

int main(){
    int a;
    cout << "Digite um numero: \n";
    cin >> a;
    int valorf = f(a);
    cout << "O fatorial de" << a << "e" << valorf << endl;

    return 0;
}