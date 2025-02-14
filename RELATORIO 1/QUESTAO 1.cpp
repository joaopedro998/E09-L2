#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float aux;
    float resultado;
    float valor;
    
    cin >> aux;
    if(aux >= 12){
        valor = 0.65;
        resultado = aux * valor;
        
        cout << fixed << setprecision(2);
        cout << "Preco da unidade:" << valor << std::endl;
        cout << "Preco total:" << resultado << std::endl;
    }
    else{
        valor = 0.8;
        resultado = aux * valor;
        
        cout << fixed << setprecision(2);
        cout << "Preco da unidade: R$" << valor << std::endl;
        cout << "Preco total: R$" << resultado << std::endl;
    }
    return 0;
}