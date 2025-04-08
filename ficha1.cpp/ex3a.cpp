#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int i = 1, a;
    
    cout << "Introduza um numero\n";
    cin >> a;
    
    while (i <= 10) {
        cout << i * a << "\n";
        i++;
    }
    
    return 0;
}