#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int tabela[2][2];
    tabela[0][0] = 10;
    tabela[0][1] = 100;
    tabela[1][0] = 20;
    tabela[1][1] = 111;
    
    int linha, coluna;
    bool continuar = true;
    
    do {
       
        cout << "Digite o índice da linha (0 ou 1): ";
        cin >> linha;
        cout << "Digite o índice da coluna (0 ou 1): ";
        cin >> coluna;
        
        if (linha >= 0 && linha < 2 && coluna >= 0 && coluna < 2) {
            cout << "Valor na posição [" << linha << "][" << coluna << "]: " << tabela[linha][coluna] << "\n";
        } else {
            cout << "Índices inválidos! Tente novamente.\n";
        }
        
        cout << "Deseja consultar outro dado? (S/N): ";
        char resposta;
        cin >> resposta;
        continuar = (resposta == 'S' || resposta == 's');
    } while (continuar);
    
    return 0;
}