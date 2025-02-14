#include <iostream>
using namespace std;


int main() {
    
      int num;
    while (true) {
        cout << "Digite um número entre 0 e 50: ";
        cin >> num;
        
        if (num >= 0 && num <= 50) {
            break;
        } else {
            cout << "Valor fora do intervalo permitido. Tente novamente." << endl;
        }
    }
    
    cout << "Restos da divisão de " << num << " pelos seus antecessores maiores que 0:" << endl;
    for (int i = 1; i < num; i++) { 
        cout << num << " % " << i << " = " << (num % i) << endl;
    }
    return 0;
}