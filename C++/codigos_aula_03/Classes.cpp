#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;
    
    public:
    void setano(int a){
        ano = a;
    }
    int getano(){
        return ano;  
    }
    void setvalor(float v){
        valor = v;
    }
    float getvalor(){
        return valor;
    }
    void setkm(float k){
        km = k;
    }
    float getkm(){
        return km;
    }
};

int main(){

    carro palio;
    palio.setano(1995);
    palio.setvalor(10000);
    palio.setkm(150000);
    cout << "palio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "valor: " << palio.getvalor() << endl;
    cout << "Quilometragem: " << palio.getkm() << endl;


    return 0;
}