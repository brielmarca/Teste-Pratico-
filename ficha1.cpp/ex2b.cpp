#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int cont = 0;
    int i = 1; // Variável de controle do loop
    
    for (; i == 1;) {
        float nota;
        
        cout << "Introduza a nota\n";
        cin >> nota;
        
        if (nota >= 10)
            cont += 1;
        
        cout << "Repetir programa - 1 Sair - Outra tecla\n";
        cin >> i;
    }
    
    cout << "O numero de notas positivas e: " << cont << "\n";
    return 0;
}