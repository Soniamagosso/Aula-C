#include <iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3;
    cout << "Digite a nota 1: \n";
    cin >> nota1;
    cout << "Digite a nota 2: \n";
    cin >> nota2;
    cout << "Digite a nota 3: \n";
    cin >> nota3;


    float media = (nota1 + nota2 + nota3)/3;
    cout << "o valor da media é" << media << endl;

    return 0;
}