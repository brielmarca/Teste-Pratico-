#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int tabela[2][2];
    
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (i == 0 && j == 0) tabela[i][j] = 10;
            else if (i == 0 && j == 1) tabela[i][j] = 100;
            else if (i == 1 && j == 0) tabela[i][j] = 20;
            else if (i == 1 && j == 1) tabela[i][j] = 111;
        }
    }
     
    cout << tabela[0][0] << "\n";
    cout << tabela[0][1] << "\n";
    cout << tabela[1][0] << "\n";
    cout << tabela[1][1] << "\n";
    
    return 0;
}