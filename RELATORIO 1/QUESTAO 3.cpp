#include <iostream>
using namespace std;

void contarValores(int a, int b, int c, int d, int e) {
    int pares = 0, impares = 0, positivos = 0, negativos = 0;
    int valores[] = {a, b, c, d, e};
    
    for (int i = 0; i < 5; i++) {
        if (valores[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        if (valores[i] > 0) {
            positivos++;
        } else if (valores[i] < 0) {
            negativos++;
        }
    }
    
    cout << "Quantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;
    cout << "Quantidade de numeros positivos: " << positivos << endl;
    cout << "Quantidade de numeros negativos: " << negativos << endl;
}

int main() {
    int n;
    cout << "Digite a quantidade de testes: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int a, b, c, d, e;
        cout << "Digite 5 valores inteiros: ";
        cin >> a >> b >> c >> d >> e;
        contarValores(a, b, c, d, e);
    }
    
    return 0;
}
