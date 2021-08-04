#include <iostream>
#include "Cidadesbrasil.h"

using namespace std;

cidadesbrasileira::cidadesbrasileira(int a=0, int p=0){
    ano = a;
    populacao = p;
}

void cidadesbrasileira::setano(int a){
    ano = a;
}
int cidadesbrasileira::getano(){
    return ano;
}
void cidadesbrasileira::setpopulacao(int p){
    populacao = p;
}
int cidadesbrasileira::getpopulacao(){
    return populacao;
}
void cidadesbrasileira::acrescentapopulacao(int p){
    populacao += p;
}