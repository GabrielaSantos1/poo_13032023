#include <iostream>
using namespace std;

int main() {
    //cria uma variável de numero inteiro chamada num
    int num;
    
    //fala com o usuario
    cout << "Digite um número inteiro positivo: ";
    //coloca a resposta do usuario como o valor da variavel num
    cin >> num;
    
    //fala para o user o valor de num entre o texto
    cout << "Os primeiros " << num << " números pares são ";
    
    //cria uma variavel inteira 'i' para identificar quais numeros são pares ou não, vendo se são iguais, divisíveis por 2.
    for (int i = 2; i <= num * 2; i +=2) {
        //mostra i para o usuário na quantidade de vezes que o usuario colocou
        cout << i << " ";
    }
    return 0;
}