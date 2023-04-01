#include <iostream>
#include <string>
using namespace std;

int main() {
    //cria duas variaveis inteiras com valor 10
    int x = 10;
    int y = 10;
    
    // se x for maior que y
    if (x > y) {
        //imprime isso pro user
        cout << "x é maior que y" << endl;
    }
    //se x for menor que y
    if (x < y) {
        //imprime isso pro user
        cout << "x é menor que y" << endl;
    }
    
    //se x for maior ou igual a y
    if (x>= y) {
        //imprime isso pro user
        cout << "x é maior ou igual a y" << endl;
    }
    //se x for menor ou igual que y
    if (x <= y) {
        //imprime isso pro user
        cout << "x é menor ou igual a y" << endl;
    }
    // se x for igual a y
    if (x == y) {
        //imprime isso pro user
        cout << "x é igual a y" << endl;
    }
    
    // se x for diferente de y
    if (x != y) {
        //imprime isso pro user
        cout << "x é diferente de y" << endl;
    }
    
    return 0;
    
}
