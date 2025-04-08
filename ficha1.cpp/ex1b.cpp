#include <iostream>
using namespace std;

int main(int argc, char** argv){
    int tabela[2][2];
    tabela[0][0] = 10;
    tabela[0][1] = 100;
    tabela[1][0] = 20;
    tabela[1][1] = 111;
    
    
    int i = 0, j = 0;
    
  
    while (i < 2) {
        while (j < 2) {
            cout << tabela[i][j] << "\n";
            j++;
        }
        i++;
        j = 0; 
    }
    
    return 0;
}