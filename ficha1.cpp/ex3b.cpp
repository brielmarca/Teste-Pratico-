#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int i = 1, a;
    
    cout << "Introduza um numero\n";
    cin >> a;
    
    do {
        cout << i * a << "\n";
        i++;
    } while (i <= 10);
    
    return 0;
}