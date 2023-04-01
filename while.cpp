#include <iostream>
using namespace std;

int main() {
    //cria 2 variaveis de numero inteiro, num e i no valor de 1
    int num, i = 1;
    
    //fala com o user
    cout << "Digite um número inteiro positivo: ";
    //coloca o valor digitado pelo usuario na variavel num
    cin >> num;
    
    //enquanto i for menor ou igual à variavel num
    while (i <= num) {
        //ele fala para o user todo o valor de i
        cout << i << " ";
        //até ele ser igual ao valor num
        i++;
    }
   
    return 0;
}