#include <iostream>
#include <string>
using namespace std;

int main() {
    //cria 3 variaveis inteiras
    int a = 15;
    int b = 3;
    int c = 10;
    
    // Exemplo de uso do operador AND (&&)
    //se a for menor que B e b for menor que C
    if (a < b && b <c) {
        //imprime que a < b < c
        cout << "A ordem é A, B, C" << endl;
    }
    
    // Operador OR ||
    //se a for maior que b ou b for maior que c
    if (a > b || b > c) {
        //imprime que uma dessas coisas tá certa
        cout << "Pelo menos umas das condições é verdadeira" << endl;
    }
    
    // NOT !
    // se a não for igual a b
    if (!(a==b)) {
        //imprime pro user que são diferentes
        cout << "A é diferente de B" << endl;
    }
    
    return 0;
    
}