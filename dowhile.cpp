#include <iostream>
using namespace std;

int main() {
    
    //cria uma variavel inteira 
    int num;
    
    //faz oq tiver dentro
    do{
        //mostra pro user 
        cout << "Digite um número de 1 à 10: ";
        //coloca a resposta como valor da variavel num
        cin >> num;
    //enquanto o valor de num for menor que 1 ou maior que 10
    } while (num <1 || num > 10);
    
    //quando não for, mostra pro user o valor digitado
    cout << "Você digitou o número " << num << ".";
    return 0;
}
