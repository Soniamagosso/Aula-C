#include <iostream>
#include "Cidadesbrasil.h"

using namespace std;

int main(){
    cidadesbrasileira campinas (1774, 1214000);
    cout << "ano de fundacao: " << campinas.getano() << endl;
    cout << "populcao: " << campinas.getpopulacao() << endl;

    cidadesbrasileira aracatuba (1908, 198129);
    cout << "ano de fundacao: " << aracatuba.getano() << endl;
    cout << "populcao: " << aracatuba.getpopulacao() << endl;

    system ("pause")

    return 0;
}